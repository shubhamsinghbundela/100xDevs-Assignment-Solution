// 2. Count word occurrences in array**
//     - Input:
        
//         ["apple", "banana", "apple", "orange", "banana", "apple"]

//     - Output:
    
//     { apple: 3, banana: 2, orange: 1 }
    

function countWordOccurrencesInArray(input){
    let object = {};
    for(let ele in input) {
        if(input[ele] in object){
            object[input[ele]]+=1
        }else{
            object[input[ele]] = 1
        }
    }
    return object
}

let output = countWordOccurrencesInArray(["apple", "banana", "apple", "orange", "banana", "apple"])
console.log('output', output)

        