function solution(strings, n) {
    strings.sort((lhs, rhs) => {
        if (lhs[n] !== rhs[n]) {
            return lhs[n].localeCompare(rhs[n]);
        } else {
            return lhs.localeCompare(rhs);
        }
    });
    
    return strings;
}