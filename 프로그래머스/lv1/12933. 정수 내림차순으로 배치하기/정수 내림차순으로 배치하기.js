function solution(n) {
    let arr = n.toString().split('').sort((lhs, rhs) => rhs - lhs);
    
    return parseInt(arr.join(''));
}