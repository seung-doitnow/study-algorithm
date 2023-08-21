function solution(s, n) {
    let answer = "";
    for (let i = 0; i < s.length; i++) {
        if (s[i] === ' ') {
            answer += ' ';
            continue;
        }
        
        let num = s.charCodeAt(i);
        if (num < 91) {
            num += n;
            if (90 < num) {
                num -= 26;
            }
        } else {
            num += n;
            if (122 < num) {
                num -= 26;
            }
        }
        
        answer += String.fromCharCode(num);
    }
    
    return answer;
}