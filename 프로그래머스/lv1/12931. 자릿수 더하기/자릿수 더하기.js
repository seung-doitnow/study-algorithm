function solution(N) {
    let arr = N.toString().split('').map((char) => parseInt(char));
    
    return arr.reduce((sum, num) => sum + num);
}