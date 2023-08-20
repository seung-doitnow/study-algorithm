function solution(arr1, arr2) {
    let answer = [];
    for (let i = 0; i < arr1.length; i++) {
        answer.push(arr1[i].map((num, index) => num + arr2[i][index]));
    }
    
    return answer;
}