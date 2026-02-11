// - Input:
    
//     ```jsx
//     { a: 3, b: 1, c: 2 }
    
//     ```
    
// - Output:
    
//     ```jsx
//     [["b",1], ["c",2], ["a",3]]
//     ```

function sortObjectEntriesbyValuesAscending(input){
    let arr = [];
    for (const [key, value] of Object.entries(input)) {
        arr.push([key, value])
    }

    arr.sort((a,b) => {
        // console.log(`comparing ${a[1]},${b[1]}`);
        if(a[1]>b[1]){
            return 1;
        }else if(a[1]<b[1]){
            return -1;
        }else{
            return 0;
        }
    });
    return arr;
}

let output = sortObjectEntriesbyValuesAscending({ a: 3, b: 1, c: 2 })
console.log('output', output)