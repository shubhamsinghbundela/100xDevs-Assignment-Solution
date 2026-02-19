function rejectAfter(ms, callback) {
    let promise = new Promise((resolve, reject)=>{
        setTimeout(()=>{
            let err={};
            err.message=`Rejected after ${ms}ms`
            reject(err);
        },ms)
    })
    let output = promise
                    .then(()=>callback(null,data))
                    .catch((err)=>{
                        console.log(err);
                        callback(err,null)
                    })
    return output
}

let a =  rejectAfter(100, (err, result) => {
    console.log(err)
 })
console.log(a);