function solution(babbling) {
    let wordArr = ['aya', 'ye', 'woo', 'ma'];
    
    let answer = [];
    for (let i = 0; i < babbling.length; i++) {
        for (let j = 0; j < 4; j++) {
            if (babbling[i].includes(wordArr[j].repeat(2))) continue;
            
            babbling[i] = babbling[i].replaceAll(wordArr[j], '0');
        }
        
        answer.push(babbling[i]);
    }
    
    console.log(Number('0e'));
    
    return answer.reduce((count, string) => isNaN(string) ? count : count + 1, 0);
}