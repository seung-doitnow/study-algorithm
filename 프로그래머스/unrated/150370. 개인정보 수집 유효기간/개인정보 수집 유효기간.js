function solution(today, terms, privacies) {
    let multipleValueArr = [336, 28, 1];
    today = today.split('.').reduce((sum, char, index) => sum += Number(char) * multipleValueArr[index], 0);

    let termObj = {};
    for (let term of terms) {
        term = term.split(' ');
        termObj[term[0]] = term[1] * 28;
    }

    let answer = [];
    for (let [index, privacie] of privacies.entries()) {
        privacie = privacie.split(' ');
        if (privacie[0].split('.').reduce((sum, char, index) => sum += Number(char) * multipleValueArr[index], 0) + termObj[privacie[1]] <= today) {
            answer.push(index + 1);
        }
    }

    return answer;
}