function solution(s) {
    return s.toLowerCase().split(' ').map((string) => {
        if (string.length !== 0) {
            return string[0].toUpperCase() + string.slice(1);
        }
    }).join(' ');
}