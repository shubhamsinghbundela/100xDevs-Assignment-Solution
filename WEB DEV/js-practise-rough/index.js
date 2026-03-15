class LeakyBucket {
  constructor(capacity, leakRateMs) {
    this.capacity = capacity;
    this.leakRateMs = leakRateMs;
    this.bucket = []; // bucket capacity = this.capacity i.e. The bucket has a maximum capacity
    this.timer = null;
  }

  add(task, onComplete) {
    // If the bucket is full, new tasks must be rejected immediately
    // Lets fill bucket until buket full
    if(this.bucket.length===this.capacity){
      task((err,data)=>{
        err={}
        err.message = "Rate Limit Exceeded"
        onComplete(err);
      })
    }
    if(this.bucket.length<this.capacity){
      this.bucket.push({task, onComplete})
      if (!this.timer) {
        this.timer = setInterval(() => this._process(), this.leakRateMs);
      }
    }
  }

  _process() {
    // console.log(this.bucket)
    if (this.bucket.length === 0) {
      clearInterval(this.timer);
      this.timer = null;
      return;
    }
    const {task, onComplete} = this.bucket?.shift();
    console.log(task);
    task((err, data)=>{
       onComplete(err, data);
       if(this.bucket.length==0){
        clearInterval(this._process)
       }
    })
  }
}


const bucket = new LeakyBucket(1, 50);

    const slowTask = (cb) => setTimeout(() => cb(null), 100);

    bucket.add(slowTask, () => {});

    bucket.add(slowTask, (err) => {
      console.log(err);
    });