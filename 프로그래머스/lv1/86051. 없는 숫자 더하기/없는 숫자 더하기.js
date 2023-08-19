function solution(numbers) {
    let hasNumber = [];
    hasNumber.length = 10;
    for (let i = 0; i < numbers.length; i++) {
        hasNumber[numbers[i]] = true;
    }
    
    let sum = 0;
    for (let i = 0; i < 10; i++) {
        if (!hasNumber[i]) {
            sum += i;
        }
    }
    
    return sum;
}