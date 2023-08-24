function solution(s) {
    let count = 0;
    let same = 0;
    let different = 0;
    let current;
    for (let i = 0; i < s.length; i++) {
        if (same === 0) {
            current = s[i];
            same += 1;
        } else {
            if (current === s[i]) {
                same++;
            } else {
                different++;
            }
        }
        
        if (same === different) {
            count++;
            same = 0;
            different = 0;
        }
    }
    
    return same === 0 && different === 0 ? count : count + 1;
}