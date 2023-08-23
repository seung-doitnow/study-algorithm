function solution(s) {
    let object = {};
    
    let answer = [...s].map((char, index) => {
        let currentIndex = object[char] !== undefined ? index - object[char] : -1;
        object[char] = index;
        return currentIndex;
    })
    
    return answer;
}