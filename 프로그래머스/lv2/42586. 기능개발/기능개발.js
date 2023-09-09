function solution(progresses, speeds) {
    let answer = [];
    let index = 0;
    while (index < progresses.length) {
        let count = 1;
        let day = Math.ceil((100 - progresses[index]) / speeds[index]);
        while (index < progresses.length) {
            index++;
            if (100 <= progresses[index] + (speeds[index] * day)) {
                count++;
            } else {
                break;
            }
        }

        answer.push(count);
    }

    return answer;
}