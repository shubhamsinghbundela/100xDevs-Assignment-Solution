// 19. **Check if all values in object are numbers**
//     - Input:
        
//         ```jsx
//         { a: 1, b: "hello", c: 3 }
        
//         ```
        
//     - Output:
        
//         ```
//         false
//         ```

function checkIfAllValuesInObjectAreNumbers(input){
    for (let ele of Object.values(input)){
        if (typeof ele === 'string'){
            return false;
        }
    }
    return true;
}

let output = checkIfAllValuesInObjectAreNumbers({ a: 1, b: 3, c: 3 })
console.log('output', output)