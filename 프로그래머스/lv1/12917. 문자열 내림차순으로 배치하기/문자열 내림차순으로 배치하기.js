function solution(s) {
    let answer = s.split('').sort((lhs, rhs) => lhs < rhs ? 1 : -1);
    
    return answer.join('');
}