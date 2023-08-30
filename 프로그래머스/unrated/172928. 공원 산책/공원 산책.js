function solution(park, routes) {
    let position;
    for (let [row, string] of park.entries()) {
        let column = string.indexOf('S');

        if (column !== -1) {
            position = [row, column];
            park[row] = string.replace('S', 'O');
            break;
        }
    }

    let lookupObj = { 'N': [-1, 0], 'S': [+1, 0], 'W': [0, -1], 'E': [0, 1] };
    for (let route of routes) {
        route = route.split(' ');
        let direction = lookupObj[route[0]];
        let distance = route[1];
        let movePosition = position;
        let isIgnored = false;
        for (let i = 0; i < distance; i++) {
            movePosition = movePosition.map((num, index) => num + direction[index]);

            if (movePosition[0] < 0 || park.length <= movePosition[0] || movePosition[1] < 0 || park[0].length <= movePosition[1]) {
                isIgnored = true;
                break;
            }

            if (park[movePosition[0]][movePosition[1]] !== 'O') {
                isIgnored = true;
                break;
            }
        }

        if (isIgnored) {
            continue;
        } else {
            position = movePosition;
        }
    }

    return position;
}