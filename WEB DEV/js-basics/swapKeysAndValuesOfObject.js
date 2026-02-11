// 3. **Swap keys and values of object**
//     - Input:
        
//         { a: "x", b: "y", c: "z" }

//     - Output:
        
//         { x: "a", y: "b", z: "c" }

function swapKeysAndValuesOfObject(input){
    let object = {};
    for(let ele in input) {
        object[input[ele]] = ele 
    }
    return object
}

let output = swapKeysAndValuesOfObject({ a: "x", b: "y", c: "z" })
console.log('output', output)