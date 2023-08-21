function solution(sizes) {
    let wallet = [0, 0];
    for (let i = 0; i < sizes.length; i++) {
        sizes[i].sort((lhs, rhs) => lhs - rhs);
        
        for (let j = 0; j < 2; j++) {
            if (wallet[j] < sizes[i][j]) {
                wallet[j] = sizes[i][j];
            }
        }
        
        wallet.sort((lhs, rhs) => lhs - rhs);
    }
    
    return wallet[0] * wallet[1];
}