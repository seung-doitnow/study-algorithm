function solution(n) {
    let sum = 0;
    let lhs = 0;
    let rhs = 1;
    for (let i = 0; i < n; i ++) {
        sum = (lhs + rhs) % 1234567;
        lhs = rhs;
        rhs = sum;
    }

    return sum;
}