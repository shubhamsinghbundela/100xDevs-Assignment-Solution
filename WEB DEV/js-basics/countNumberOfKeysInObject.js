// 13. **Count number of keys in object**
//     - Input:

//         ```jsx
//         { a: 1, b: 2, c: 3 }

//         ```

//     - Output:

//         ```
//         3
//         ```

function countNumberOfKeysInObject(input) {
    let count = 0;

    for (const key of Object.keys(input)) {
        count++;
    }
    return count;
}

let output = countNumberOfKeysInObject({ a: 1, b: 2, c: 3 })
console.log('output', output)