// 2. **Transform API response to object (id → name)**
//     - Input:
        
//         ```jsx
//         [
//           { id: 1, name: "Alice" },
//           { id: 2, name: "Bob" }
//         ]
//         ```
        
//     - Output:
        
//         ```jsx
//         { 1: "Alice", 2: "Bob" }
//         ```

function transformAPIResponseToObject(input){
    let obj = {};
    for(let ele in input){
        let name = input[ele].name;
        let id = input[ele].id;
        obj[id] = name;
    }
    return obj;
}

let output = transformAPIResponseToObject([
    { id: 1, name: "Alice" },
    { id: 2, name: "Bob" }
]);
console.log('output', output)