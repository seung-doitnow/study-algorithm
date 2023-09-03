function solution(n, a, b) {
    let min = Math.min(a, b);
    let max = Math.max(a, b);
    let answer = 1;
    while (min % 2 !== 1 || max - min !== 1) {
        min = Math.ceil(min / 2);
        max = Math.ceil(max / 2);

        console.log(min, max);

        answer++;
    }

    return answer;
}