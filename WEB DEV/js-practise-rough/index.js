function createWindowAggregator(windowSize, onWindowReady) {
  let arr = [];
  let l=0, r=windowSize-1;
  return function(...args){
     //On each new value, compute and emit the current average.
    //  Before N values are received, compute the average
     arr.push(...args);
     if(arr.length<windowSize){
        let sum = 0;
        for(let i=0; i<arr.length;i++){
            sum+=arr[i];
        }

        let avg = sum/arr.length;
        onWindowReady(avg);
     }else{
       while(r<arr.length){
        // console.log(r);
          let sum = 0;
          for(let i=l; i<=r; i++){
            sum+=arr[i];
          }
          console.log(sum);

          let avg =  sum/windowSize;
          onWindowReady(avg);
          l+=1;
          r+=1;
       }
     }
  }
}

const results = [];
    
    const onWindowReady = (avg) => {
      results.push(avg);
      if (results.length === 4) {
        console.log(results);
      }
    };

    const add = createWindowAggregator(3, onWindowReady);

    add(1);
    add(2);
    add(3);
    add(10);