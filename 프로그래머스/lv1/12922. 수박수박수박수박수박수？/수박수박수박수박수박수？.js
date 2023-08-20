function solution(n) {
    let string = "수박".repeat(n / 2);
    
    return n % 2 === 0 ? string : string + "수";
}