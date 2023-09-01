function solution(s) {
    let answer = [0, 0];
    while (s !== '1') {
        let zeroCount = 0;
        for (let i = 0; i < s.length; i++) {
            if (s[i] === '0') {
                zeroCount++;
            }
        }

        s = '1'.repeat(s.length - zeroCount);
        s = s.length.toString(2);

        answer[0]++;
        answer[1] += zeroCount;
    }

    return answer;
}