function solution(numbers) {
    let sumArr = [];
    
    for (let i = 0; i < numbers.length - 1; i++) {
        for (let j = i + 1; j < numbers.length; j++) {
            sumArr.push(numbers[i] + numbers[j]);
        }
    }
    
    let answer = [...new Set(sumArr)].sort((lhs, rhs) => lhs - rhs);
    
    return answer;
}