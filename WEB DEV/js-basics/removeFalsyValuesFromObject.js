// 3. **Remove falsy values from object**
//     - Input:
        
//         ```jsx
//         { a: 0, b: null, c: "hello", d: undefined, e: 5 }
        
//         ```
        
//     - Output:
        
//         ```jsx
//         { c: "hello", e: 5 }
//         ```

// removeFalsyValuesFromObject

function removeFalsyValuesFromObject(input){
    let obj = {};
    for(let ele in input){
        if(input[ele]){
            obj[ele]=input[ele];
        }
    }
    return obj;
}

let output = removeFalsyValuesFromObject({ a: 0, b: null, c: "hello", d: undefined, e: 5 });
console.log('output', output)