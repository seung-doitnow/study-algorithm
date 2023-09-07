function solution(citations) {
    citations.sort((lhs, rhs) => rhs - lhs);

    let answer = 0;
    for (let i = 0; i < citations.length; i++) {
        if (i < citations[i]) {
            answer++;
        }
    }

    return answer;
}