function solution(answers) {
    let patternArr = [[1, 2, 3, 4, 5], [2, 1, 2, 3, 2, 4, 2, 5], [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]]
    
    let scoreArr = [0, 0, 0];
    for (let i = 0; i < answers.length; i++) {
        for (let j = 0; j < 3; j++) {
            if (answers[i] === patternArr[j][i % patternArr[j].length]) {
                scoreArr[j]++;
            }
        }
    }
    
    let answer = [];
    let max = Math.max(...scoreArr);
    for (let i = 0; i < 3; i++) {
        if (scoreArr[i] === max) {
            answer.push(i + 1);
        }
    }
    
    return answer;
}