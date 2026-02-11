// 1. **Unique values across all object arrays**
//     - Input:
        
//         ```jsx
//         { x: [1,2,3], y: [2,3,4], z: [4,5] }
        
//         ```
        
//     - Output:
        
//         ```jsx
//         [1,2,3,4,5]
//         ```

function uniqueValuesAcrossAllObjectArrays(input){
    let arr = [];
    for(let ele in input){
        arr.push(input[ele]);
    }
    arr = arr.flat(1);
    return [...new Set(arr)]
}

let output = uniqueValuesAcrossAllObjectArrays({ x: [1,2,3], y: [2,3,4], z: [4,5] })
console.log('output', output)