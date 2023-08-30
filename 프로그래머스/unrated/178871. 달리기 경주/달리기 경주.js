function solution(players, callings) {
    let keyNameObj = {};
    let keyRankObj = {};
    for (let [index, player] of players.entries()) {
        keyNameObj[player] = index + 1;
        keyRankObj[index + 1] = player;
    }

    for (let calling of callings) {
        let overtakenRank = Number(keyNameObj[calling]) - 1;
        let overtookRank = Number(keyNameObj[calling]);
        let overtakenName = keyRankObj[overtakenRank];

        keyNameObj[overtakenName] = overtookRank;
        keyNameObj[calling] = overtakenRank;
        keyRankObj[overtakenRank] = calling;
        keyRankObj[overtookRank] = overtakenName;
    }

    return Object.values(keyRankObj);
}