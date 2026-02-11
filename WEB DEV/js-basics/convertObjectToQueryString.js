// 15. **Convert object to query string**
//     - Input:
        
//         ```jsx
//         { name: "Alice", age: 25 }
        
//         ```
        
//     - Output:
        
//         ```
//         "name=Alice&age=25"
        
//         ```

function convertObjectToQueryString(input) {
    let str = '';
    Object.entries(input).forEach((ele,index) => {
        if(index !== Object.entries(input).length-1){
            str+=`${ele[0]}=${ele[1]}&`
        }else{
            str+=`${ele[0]}=${ele[1]}`
        }
    })

    return str;
}

let output = convertObjectToQueryString({ name: "Alice", age: 25 })
console.log('output', output)