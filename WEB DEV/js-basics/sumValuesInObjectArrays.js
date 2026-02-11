// 1. Sum values in object arrays**
//     - Input:
        
//     { food: [10, 20, 30], travel: [5, 15], bills: [40, 60] }

//     - Output

//     { food: 60, travel: 20, bills: 100 }

function sumValuesInObjectArrays(input){
    let object = {};
    for(let ele in input) {
        object[ele] = input[ele].reduce((accumulator, currentValue) => accumulator + currentValue, 0)
    }
    return object
}

let output = sumValuesInObjectArrays({ food: [10, 20, 30], travel: [5, 15], bills: [40, 60] })
console.log('output', output)

    