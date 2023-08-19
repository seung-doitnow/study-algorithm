function solution(a, b) {
    let min;
    let max;
    if (a < b) {
        min = a;
        max = b;
    } else {
        min = b;
        max = a;
    }
    
    let sum = 0;
    for (let i = min; i <= max; i++) {
        sum += i;
    }
    
    return sum;
}