function solution(x) {
    let arr = x.toString().split('').map((char) => parseInt(char));
    
    return x % arr.reduce((sum, num) => sum + num) === 0 ? true : false;
}