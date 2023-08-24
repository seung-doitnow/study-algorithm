function solution(keymap, targets) {
    let key = new Map();
    for (let i = 0; i < keymap.length; i++) {
        for (let j = 0; j < keymap[i].length; j++) {
            if (key.has(keymap[i][j])) {
                if (j < key.get(keymap[i][j])) {
                    key.set(keymap[i][j], j);
                }
            } else {
                key.set(keymap[i][j], j);
            }
        }
    }
    
    let answer = [];
    for (let i = 0; i < targets.length; i++) {
        let sum = 0;
        for (let j = 0; j < targets[i].length; j++) {
            let count = key.get(targets[i][j]);
            if (count !== undefined) {
                sum += count + 1;
            } else {
                sum = -1;
                break;
            }
        }
        
        answer.push(sum);
    }
    
    return answer;
}