// 4. Check for permissions from roles
//     - Input:
        
//         ```jsx
//         roles={ admin:["read","write"], user:["read"], staff: ["write"]}
//         checkRole="user",
//         action="write"
//         ```
        
//     - Output:
        
//         ```jsx
//         false
//         ```

function checkForPermissionsFromRoles(input1, input2, input3){
    return input1[input2].includes(input3);
}

let output = checkForPermissionsFromRoles({ admin:["read","write"], user:["read"], staff: ["write"]}, "user", "write");
console.log('output', output)