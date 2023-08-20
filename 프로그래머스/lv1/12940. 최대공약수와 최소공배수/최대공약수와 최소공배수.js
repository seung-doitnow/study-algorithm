function solution(n, m) {
    let num;
    let gcd;
    if (n < m) {
        num = m;
        gcd = n;
    } else {
        num = n;
        gcd = m;
    }
    
    while (num % gcd !== 0) {
        let remainder = num % gcd;
        num = gcd;
        gcd = remainder;
    }
    
    return [gcd, n * m / gcd];
}