function solution(k, score) {
    let maxScoreArr = [];
    
    return score.map((num, index) => {
        if (maxScoreArr.length < k) {
            maxScoreArr.push(num);
        } else if (maxScoreArr[maxScoreArr.length - 1] < num) {
            maxScoreArr.pop();
            maxScoreArr.push(num);
        }
        
        maxScoreArr.sort((lhs, rhs) => rhs - lhs);
        
        return maxScoreArr[maxScoreArr.length - 1];
    })
}