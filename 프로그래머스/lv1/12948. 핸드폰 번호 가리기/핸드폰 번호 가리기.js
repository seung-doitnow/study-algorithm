function solution(phone_number) {
    let criterion = phone_number.length - 4;
    
    return '*'.repeat(criterion) + phone_number.slice(criterion);
}