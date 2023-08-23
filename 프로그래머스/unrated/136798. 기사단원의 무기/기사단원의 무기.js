function solution(number, limit, power) {
    let sum = 0;
    for (let i = 1; i <= number; i++) {
        let count = 0;
        let sqrt = Math.sqrt(i);
        for (let j = 1; j <= sqrt; j++) {
            if (i % j === 0) {
                if (j * j !== i) {
                    count += 2;
                } else {
                    count++;
                }
            }
        }
        
        if (limit < count) {
            sum += power;
        } else {
            sum += count;
        }
    }
    
    return sum;
}