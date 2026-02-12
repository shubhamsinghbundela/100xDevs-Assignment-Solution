// 1. **Sum all transactions per user**
//     - Input:
        
//         ```jsx
        // [
        //   { user: "A", amount: 100 },
        //   { user: "B", amount: 200 },
        //   { user: "A", amount: 50 }
        // ]
//         ```
        
//     - Output:
        
//         ```jsx
//         { A: 150, B: 200 }
//         ```

// sumAllTransactionsPerUser

function sumAllTransactionsPerUser(input){
    let obj = {};
    for(let ele of input){
        let a = ele["user"];
        obj[a] = 0;
    }
    for(let ele of input){
        let a = ele["user"];
        obj[a] += ele["amount"];
    }
    return obj;
}

let output = sumAllTransactionsPerUser([
    { user: "A", amount: 100 },
    { user: "B", amount: 200 },
    { user: "A", amount: 50 }
])
console.log('output', output)