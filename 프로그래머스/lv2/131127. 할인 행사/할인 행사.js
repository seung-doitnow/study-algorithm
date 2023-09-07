function solution(want, number, discount) {
    let wantObj = {};
    for (let [index, product] of want.entries()) {
        wantObj[product] = number[index];
    }

    let answer = 0;
    let discountObj = {};
    for (let i = 0; i <= discount.length - 10; i++) {
        let canSignUp = true;

        if (i === 0) {
            for (let j = 0; j < 10; j++) {
                if (discountObj[discount[j]] === undefined) {
                    discountObj[discount[j]] = 1;
                } else {
                    discountObj[discount[j]]++;
                }
            }
        } else {
            discountObj[discount[i - 1]]--;
            if (discountObj[discount[i + 9]] === undefined) {
                discountObj[discount[i + 9]] = 1;
            } else {
                discountObj[discount[i + 9]]++;
            }
        }

        for (let product of want) {
            if (discountObj[product] < wantObj[product] || discountObj[product] === undefined) {
                canSignUp = false;
                break;
            }
        }

        if (canSignUp) {
            answer++;
        }
    }

    return answer;
}