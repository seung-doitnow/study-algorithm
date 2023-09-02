function solution(brown, yellow) {
    let answer;
    let area = brown + yellow;
    for (let width = Math.floor((brown - 2) / 2); 3 <= width; width--) {
        if (area % width !== 0) continue;

        let height = area / width;
        if ((width - 2) * (height - 2) === yellow) {
            answer = [width, height];
            break;
        }
    }

    return answer;
}