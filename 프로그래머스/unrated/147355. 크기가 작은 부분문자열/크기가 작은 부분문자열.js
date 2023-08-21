function solution(t, p) {
    let answer = 0;
    let num = parseInt(p);
    for (let i = 0; i <= t.length - p.length; i++) {
        if (parseInt(t.slice(i, i + p.length)) <= num) {
            answer++;
        }
    }
    
    return answer;
}