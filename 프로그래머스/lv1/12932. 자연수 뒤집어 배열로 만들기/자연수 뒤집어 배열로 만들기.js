function solution(n) {
    let arr = n.toString().split('').map((char) => parseInt(char));
    
    return arr.reverse();
}