// 6. **Group people by city**
//     - Input:
        
//         ```jsx
        // [
        //   { name: "A", city: "Delhi" },
        //   { name: "B", city: "Mumbai" },
        //   { name: "C", city: "Delhi" }
        // ]
        
//         ```
        
//     - Output:
        
//         ```jsx
//         { Delhi: ["A", "C"], Mumbai: ["B"] }
        
//         ```

function groupPeopleByCity(input){
    let obj = {};
    for(let ele of input){
        if(ele.city in obj){
            obj[ele.city].push(ele.name)
        }else{
            obj[ele.city]=[ele.name];
        }
    }
    return obj;
}

let output = groupPeopleByCity(
    [
        { name: "A", city: "Delhi" },
        { name: "B", city: "Mumbai" },
        { name: "C", city: "Delhi" },
    ]
)