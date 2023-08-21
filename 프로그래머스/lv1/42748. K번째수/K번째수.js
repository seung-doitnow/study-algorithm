function solution(array, commands) {
    let answer = [];
    for (let i = 0; i < commands.length; i++) {
        let arr = array.slice(commands[i][0] - 1, commands[i][1]).sort((lhs, rhs) => lhs - rhs);
        answer.push(arr[commands[i][2] - 1]);
    }
    
    return answer;
}