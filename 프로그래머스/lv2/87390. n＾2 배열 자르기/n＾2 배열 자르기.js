function solution(n, left, right) {
    let answer = [];
    for (let i = Math.floor(left / n); i < Math.ceil(right / n); i++) {
        for (let j = 0; j < n; j++) {
            let num = i < j ? j + 1 : i + 1;
            answer.push(num);
        }
    }

    let skipCount = n * Math.floor(left / n);
    return answer.slice(left - skipCount, right - skipCount + 1);
}