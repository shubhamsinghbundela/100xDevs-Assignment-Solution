// 4. **Find the largest value key**
//     - Input:
        
//         ```jsx
//         { a: 10, b: 50, c: 20 }
        
//         ```
        
//     - Output:
        
//         ```
//         b
//         ```

function findTheLargestValueKey(input){
    let max=0;
    let output;
    for(let [key, value] of Object.entries(input)) {
       if(value>max){
        max=value
        output = key;
       }
    }
    return output
}

let output = findTheLargestValueKey({ a: 10, b: 50, c: 20 })