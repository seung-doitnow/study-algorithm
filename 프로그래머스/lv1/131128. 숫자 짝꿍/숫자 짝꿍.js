function solution(X, Y) {
    let pairMap = new Map();
    for (let i = 0; i < X.length; i++) {
        if (pairMap.has(X[i])) {
            pairMap.set(X[i], pairMap.get(X[i]) + 1);
        } else {
            pairMap.set(X[i], 1);
        }
    }
    
    let pairArr = [];
    for (let i = 0; i < Y.length; i++) {
        if (pairMap.get(Y[i]) > 0) {
            pairArr.push(Y[i]);
            pairMap.set(Y[i], pairMap.get(Y[i]) - 1);
        }
    }
    
    if (pairArr.length === 0) pairArr.push(-1);
    pairArr.sort((lhs, rhs) => rhs - lhs);
    
    return pairArr[0] !== '0' ? pairArr.join('') : '0';
}