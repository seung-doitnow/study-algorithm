function solution(wallpaper) {
    let minY = 51;
    let minX = 51;
    let maxY = 0;
    let maxX = 0;
    for (let i = 0; i < wallpaper.length; i++) {
        for (let j = 0; j < wallpaper[i].length; j++) {
            if (wallpaper[i][j] === '#') {
                if (i < minY) minY = i;
                if (j < minX) minX = j;
                if (maxY < i) maxY = i;
                if (maxX < j) maxX = j;
            }
        }
    }

    return [minY, minX, maxY + 1, maxX + 1];
}