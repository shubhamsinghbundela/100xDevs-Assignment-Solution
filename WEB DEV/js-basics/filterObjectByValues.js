// 7. **Filter object by values > 50**
//     - Input:
        
//         ```jsx
//         { a: 20, b: 60, c: 40, d: 90 }
        
//         ```
        
//     - Output:
        
//         ```jsx
//         { b: 60, d: 90 }
        
//         ```


function filterObjectByValues(input){
    let obj = {};
    for(let ele in input){
        if(input[ele]>50){
            obj[ele]=input[ele]
        }
    }
    return obj;
}

let output = filterObjectByValues({ a: 20, b: 60, c: 40, d: 90 })
console.log('output', output)