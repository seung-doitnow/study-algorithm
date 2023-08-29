function solution(survey, choices) {
    let scoreMap = new Map([["A", 0], ["C", 0], ["F", 0], ["J", 0], ["M", 0], ["N", 0], ["R", 0], ["T", 0]]);
    for (let i = 0; i < choices.length; i++) {
        let target;
        if (choices[i] < 4) {
            target = survey[i][0];
        } else if (4 < choices[i]) {
            target = survey[i][1];
        } else {
            continue;
        }

        scoreMap.set(target, scoreMap.get(target) + Math.abs(choices[i] - 4));
    }

    return [["R", "T"], ["C", "F"], ["J", "M"], ["A", "N"]].map((type) => scoreMap.get(type[0]) < scoreMap.get(type[1]) ? type[1] : type[0]).join('');
}