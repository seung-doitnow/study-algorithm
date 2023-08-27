function solution(s, skip, index) {
    let alphabetMap = new Map();
    let count = 0;
    let alphabetArr = ['a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'j', 'k', 'l', 'm', 'n',
        'o', 'p', 'q', 'r', 's', 't', 'u',
        'v', 'w', 'x', 'y', 'z'].filter((alphabet) => {
            alphabetMap.set(alphabet, count);
            if (skip.includes(alphabet)) {
                count++;
                return false;
            } else {
                return true;
            }
        });

    return s.split('').map((alphabet) => {
        let code = alphabet.charCodeAt() - 97 - alphabetMap.get(alphabet);
        return alphabetArr[(code + index) % alphabetArr.length];
    }).join('');
}