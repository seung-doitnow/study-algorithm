function solution(clothes) {
    let clothObj = {};
    let clothCount = 0;
    for (let cloth of clothes) {
        if (clothObj[cloth[1]] === undefined) {
            clothObj[cloth[1]] = new Array();
        }

        clothObj[cloth[1]].push(cloth[0]);
        clothCount++;
    }

    let caseCount = 1;
    let clothObjSize = 0;
    for (let type of Object.values(clothObj)) {
        caseCount *= type.length + 1;
        clothObjSize++;
    }

    return clothObjSize === 1 ? clothCount : caseCount - 1;
}