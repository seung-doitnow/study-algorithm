function solution(priorities, location) {
    let count = 1;
    let maxPriority = Math.max(...priorities);
    while (priorities.length !== 0) {
        let process = priorities.shift();

        if (process === maxPriority && location === 0) {
            return count;
        } else if (process === maxPriority) {
            count++;
            maxPriority = Math.max(...priorities);
        } else {
            priorities.push(process);
        }

        location <= 0 ? location = priorities.length - 1 : location--;
    }
}