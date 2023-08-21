const fs = require("fs");
let input = fs.readFileSync("/dev/stdin").toString().split(' ').map(char => parseInt(char));

console.log(input.reduce((sum, num) => sum + num));