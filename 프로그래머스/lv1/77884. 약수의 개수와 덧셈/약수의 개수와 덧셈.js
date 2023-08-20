function solution(left, right) {
    let sum = 0;
    for (let i = left; i <= right; i++) {
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
        
        if (count % 2 === 0) {
            sum += i;
        } else {
            sum -= i;
        }
    }
    
    return sum;
}