// 18. **Convert array of objects to lookup by id**
//     - Input:
        
//         ```jsx
//         [{ id: 1, name: "A" }, { id: 2, name: "B" }]
        
//         ```
        
//     - Output:
        
//         ```jsx
//         { 1: { id:1, name:"A" }, 2: { id:2, name:"B" } }
        
//         ```

function convertArrayOfObjectsToLookupbyId(input){
    let obj = {};
    for(const key in input){
        let a = input[key].id;
        obj[a] = input[key];
    }
    return obj;
}

let output = convertArrayOfObjectsToLookupbyId([{ id: 1, name: "A" }, { id: 2, name: "B" }])
console.log('output', output)