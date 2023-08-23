function solution(food) {
    food.shift();
    let foods = [...food].map((num, index) => String(index + 1).repeat(Math.floor(num / 2)));
    
    return [...foods].join('') + '0' + [...foods].reverse().join('');
}