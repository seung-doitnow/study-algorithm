function solution(n) {
    let sqrt = parseInt(Math.sqrt(n));
    
    return sqrt ** 2 === n ? (sqrt + 1) ** 2 : -1;
}