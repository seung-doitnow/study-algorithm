function solution(s) {
    let countP = 0;
    let countY = 0;
    for (alphabet of s) {
        if (alphabet === 'p' || alphabet === 'P') {
            countP++;
        } else if (alphabet === 'y' || alphabet === 'Y') {
            countY++;
        }
    }
    
    if (countP === countY) {
        return true
    } else {
        return false
    }
}