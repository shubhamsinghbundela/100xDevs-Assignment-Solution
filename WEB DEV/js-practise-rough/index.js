function fetchWithTimeout(url, ms, callback) {
    let output = new Promise((resolve, reject)=>{
        fetch(url, (err,data)=>{
            if(err){
                reject("Request Timed Out")
            }else{
                resolve(data);
            }
        })
    },ms)
    return output.then((data)=>callback(null,data)).catch((err)=>callback(err))
}

fetchWithTimeout("url", 100, (err, result) => {
    if(err){
        console.log(err);
    }else{
        console.log(data)
    }
})