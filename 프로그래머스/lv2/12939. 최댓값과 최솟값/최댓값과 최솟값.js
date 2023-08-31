function solution(s) {
    s = s.split(' ').map((char) => Number(char));

    return [Math.min(...s), Math.max(...s)].join(' ');
}