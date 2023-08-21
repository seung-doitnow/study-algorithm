function solution(s) {
    let answer = s.split(' ').map(word => {
        return word.split('').map((char, index) => {
            return index % 2 === 0 ? char.toUpperCase() : char.toLowerCase();
        }).join('');
    })

    return answer.join(' ');
}