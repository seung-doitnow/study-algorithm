function solution(arr) {
    let lcm = 0;
    let multiple = arr[arr.length - 1];
    let plusValue = multiple;
    while (true) {
        let isLCM = true;
        for (let i = arr.length - 2; 0 <= i; i--) {
            if (multiple % arr[i] !== 0) {
                isLCM = false;
                break;
            }
        }

        if (isLCM) {
            lcm = multiple;
            break;
        }

        multiple += plusValue;
    }

    return lcm;
}