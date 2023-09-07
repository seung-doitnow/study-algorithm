function solution(elements) {
    let sumSet = new Set();
    for (let i = 1; i <= elements.length; i++) {
        let sum = 0;
        for (let j = 0; j < i; j++) {
            sum += elements[j];
        }

        sumSet.add(sum);

        for (let j = 1; j < elements.length; j++) {
            sum -= elements[j - 1];
            sum += elements[(j + i - 1) % elements.length];

            sumSet.add(sum);
        }
    }

    return sumSet.size;
}