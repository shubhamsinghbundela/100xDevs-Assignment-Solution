// 11. Find student with highest average marks
//     - Input:
//         { A: [80, 90], B: [70, 75, 85] }
        
//     - Output:
//         A
        

function findStudentWithHighestAverageMarks(input){
    //How to find average from an array
    //i have to compare with max value 
    //read forloop of object

     let max = 0;
     let maxKey;
     Object.keys(input).forEach(key => {
        const value = input[key];
        let sum = 0;
        for(let i=0;i<value.length;i++){
            sum+=value[i];
        }
        let temp = sum/value.length;
        if(temp>max){
            max = temp;
            maxKey = key;
        }
    });

    return maxKey;
}

let output = findStudentWithHighestAverageMarks({ A: [80, 90], B: [70, 75, 85] })
console.log('output', output)