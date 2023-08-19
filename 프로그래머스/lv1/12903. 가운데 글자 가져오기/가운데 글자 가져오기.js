function solution(s) {
    let index = parseInt(s.length / 2);
    if (s.length % 2 === 0) {
        s = s.slice(index - 1, index + 1);
    } else {
        s = s.slice(index, index + 1);
    }
    
    return s;
}