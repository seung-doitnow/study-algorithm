function solution(a, b, n) {
    let answer = 0;
    while (a <= n) {
        let exchangeCount = Math.floor(n / a);
        let returnNum = exchangeCount * b;
        answer += returnNum;
        n -= exchangeCount * a - returnNum;
    }
    
    return answer;
}