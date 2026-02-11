// 14. **Capitalize string values inside object**
//     - Input:
        
//         ```jsx
//         { name: "alice", city: "delhi" }
        
//         ```
        
//     - Output:
        
//         ```jsx
//         { name: "Alice", city: "Delhi" }
//         ```

function capitalizeStringValuesInsideObject(input) {
    let obj = {};
    for (const key in input) {
        obj[key] = input[key][0].toUpperCase() + input[key].slice('1');
    }
    return obj;
}

let output = capitalizeStringValuesInsideObject({ name: "alice", city: "delhi" })
console.log('output', output)