function solution(k, tangerine) {
    let countObj = {};
    for (let type of tangerine) {
        if (countObj[type] === undefined) {
            countObj[type] = 1;
        } else {
            countObj[type]++;
        }
    }

    let countArr = Object.values(countObj).sort((lhs, rhs) => rhs - lhs);
    let sum = 0;
    let typeCount = 0;
    for (let count of countArr) {
        sum += count;
        typeCount++;

        if (k <= sum) break;
    }

    return typeCount;
}