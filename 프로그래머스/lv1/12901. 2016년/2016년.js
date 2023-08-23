function solution(a, b) {
    let dayArr = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
    let sum = 0;
    for (let i = 0; i < a - 1; i++) {
        sum += dayArr[i];
    }
    
    return ["FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"].at((sum + b) % 7 - 1);
}