function solution(id_list, report, k) {
    let userObj = {};
    let reportObj = {};
    for (let user of id_list) {
        userObj[user] = new Set();
        reportObj[user] = 0;
    }

    for (let names of report) {
        names = names.split(' ');

        if (userObj[names[0]].has(names[1]) === false) {
            reportObj[names[1]]++;
        }
        userObj[names[0]].add(names[1]);
    }

    return id_list.map((user) => Array.from(userObj[user]).filter((name) => k <= reportObj[name] ? true : false).length);
}