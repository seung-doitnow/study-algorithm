function solution(k, m, score) {
    score.sort((lhs, rhs) => rhs - lhs);
    
    let answer = 0;
    let boxCount = Math.floor(score.length / m);
    let boxIndex = m - 1;
    for (let i = 0; i < boxCount; i++) {
        answer += score[boxIndex] * m;
        boxIndex += m;
    }
    
    return answer;
}