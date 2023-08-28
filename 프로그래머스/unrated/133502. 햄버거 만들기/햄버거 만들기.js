function solution(ingredient) {
    let stack = [];
    return ingredient.reduce((count, num) => {
        stack.push(num);
        if (stack.slice(-4).join("") === "1231") {
            stack.splice(-4);
            return count + 1;
        }
        return count;
    }, 0)
}