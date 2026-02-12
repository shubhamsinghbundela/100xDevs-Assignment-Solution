// findCommonKeysBetweenTwoObjects.js

// 17. **Find common keys between two objects**
//     - Input:
        
//         ```jsx
//         { a: 1, b: 2, c: 3 }, { b: 4, c: 5, d: 6 }
        
//         ```
        
//     - Output:
        
//         ```jsx
//         ["b","c"]
        
//         ```

function findCommonKeysBetweenTwoObjects(input1, input2){
    let arr1 = Object.keys(input1);
    let arr2 = Object.keys(input2);

    let shortArr = [];
    let longArr = [];
    if(arr1.length<arr2.length){
        shortArr = arr1
        longArr= arr2;
    }else{
        shortArr = arr2;
        longArr = arr1;
    }
    // console.log('shortArr', shortArr);
    // console.log('longArr', longArr);
    let outputArr = [];
    for(let i=0;i<shortArr.length;i++){
        let target = shortArr[i];
        let count = 0;
        for(let i=0; i<longArr.length; i++){
            if(target==longArr[i]){
                count++
            }

            if(count>0){
                outputArr.push(target);
                break;
            }
        }
        
    }
    return outputArr;
}

let output = findCommonKeysBetweenTwoObjects({ a: 1, b: 2, c: 3}, { b: 4, c: 5, d: 6 })
console.log('output', output)