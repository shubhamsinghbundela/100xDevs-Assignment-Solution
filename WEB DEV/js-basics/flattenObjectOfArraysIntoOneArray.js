// 5. **Flatten object of arrays into one array**
//     - Input:
        
//         ```jsx
//         { fruits: ["apple", "banana"], veggies: ["carrot", "pea"] }
        
//         ```
        
//     - Output:
        
//         ["apple", "banana", "carrot", "pea"]

function flattenObjectOfArraysIntoOneArray(input){
    let arr = []
    for(let ele in input){
        arr.push(input[ele])
    }

    return arr.flat(1);
}

let output = flattenObjectOfArraysIntoOneArray({ fruits: ["apple", "banana"], veggies: ["carrot", "pea"] })
console.log('output', output)