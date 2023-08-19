function solution(n) {
    let sum = 0;
    let sqrt = Math.sqrt(n);
    for (let i = 1; i <= sqrt; i++) {
        if (n % i === 0) {
            sum += i;
            if (i * i !== n) {
                sum += n / i;
            }
        }
    }
    
    return sum;
}