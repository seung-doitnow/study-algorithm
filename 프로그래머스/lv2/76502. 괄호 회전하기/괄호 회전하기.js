function solution(s) {
    let answer = 0;
    let pair = { '(': ')', '[': ']', '{': '}' };
    s = s.split('');
    for (let i = 0; i < s.length; i++) {
        let isRight = true;
        let stack = [];
        let arr = Array.from(s);
        for (let bracket of arr) {
            if (bracket === '(' || bracket === '[' || bracket === '{') {
                stack.push(pair[bracket]);
            } else {
                if (bracket !== stack.pop()) {
                    isRight = false;
                    break;
                }
            }
        }

        if (isRight) {
            answer++;
        }

        s.push(s.shift());
    }

    return s.length % 2 === 0 ? answer : 0;
}