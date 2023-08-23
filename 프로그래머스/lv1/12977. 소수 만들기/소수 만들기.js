function solution(nums) {
    let count = 0;
    
    for (let i = 0; i < nums.length - 2; i++) {
        for (let j = i + 1; j < nums.length - 1; j++) {
            for (let k = j + 1; k < nums.length; k++) {
                let sum = nums[i] + nums[j] + nums[k];
                
                if (checkPrime(sum)) {
                    count++;
                }
            }
        }
    }
    
    return count;
}

function checkPrime(num) {
    let sqrt = Math.sqrt(num);
    for (let i = 2; i <= sqrt; i++) {
        if (num % i === 0) {
            return false;
        }
    }
    
    return true;
}