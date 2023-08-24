function solution(lottos, win_nums) {
    let rankArr = [6, 6, 5, 4, 3, 2, 1];
    
    let prizeCount = 0;
    let zeroCount = 0;
    for (let i = 0; i < lottos.length; i++) {
        if (win_nums.includes(lottos[i])) prizeCount++;
        if (lottos[i] === 0) zeroCount++;
    }
    
    return [rankArr[prizeCount + zeroCount], rankArr[prizeCount]];
}