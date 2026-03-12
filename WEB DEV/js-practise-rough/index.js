class Mutex {
  constructor() {
    this.queue = [];
    this.active = 0;
  }

  lock(task, onComplete) {
      this.queue.push({ task, onComplete });
      this._release();
  }

  _release() {
      while(this.active<1 && this.queue.length>0){
        const { task, onComplete } = this.queue.shift();
        this.active++;
        task((err, data) => {
          // decrease running after finishes
          this.active--;
  
          if (onComplete) {
            if(err){
              console.log(err);
              err.message=err;
              onComplete(err);
            }else{
               onComplete(err, data);
            }
          }
          // trigger next
          this._release();
        });
      }
  }
}

const mutex = new Mutex();
const results = [];

 mutex.lock(
   (cb) => setTimeout(() => cb(new Error("A_FAILED")), 10),
  //  (err) => {
  //    console.log(err);
  //  }
 );

 mutex.lock(
  (cb) => setTimeout(() => cb(null, "TASK_B"), 10),
  (err, data) => {
    results.push(data);

    console.log('results', results);
  }
);
