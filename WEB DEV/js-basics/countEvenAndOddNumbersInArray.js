// 16. **Count even and odd numbers in array**
//     - Input:
        
//         ```jsx
//         [1,2,3,4,5,6]
        
//         ```
        
//     - Output:
        
//         ```jsx
//         { even: 3, odd: 3 }
        
//         ```

function countEvenAndOddNumbersInArray(input) {
    let obj = {};
    let countEven= 0;
    let countOdd = 0;
    input.forEach(element => {
        if(element%2==0){
            obj['even'] = ++countEven;
        }else{
            obj['odd'] = ++countOdd;
        }
    });

    return obj;
}

let output = countEvenAndOddNumbersInArray([1,2,3,4,5,6])
console.log('output', output)