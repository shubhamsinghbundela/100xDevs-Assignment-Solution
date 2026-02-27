let results = [];
let limit = 2;
let items=[2,10,2]
const worker = (delay, cb) => setTimeout(() => cb(null, `Finished ${delay}`), delay);

for (let i = 0; i <= limit; i++) {
  worker(items[i], (err, data) => {
    

    results.push(data);
    console.log('results', results)

  });
  console.log('results', results)
}

console.log("Loop finished");