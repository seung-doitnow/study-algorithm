function solution(n, lost, reserve) {
    reserve = reserve.filter(num => {
        let index = lost.indexOf(num);
        if (index !== -1) {
            lost.splice(index, 1);
            return false;
        }
        
        return true;
    });
    
    lost = lost.sort((lhs, rhs) => lhs - rhs).filter(num => {
        let index = reserve.indexOf(num - 1);
        if (index !== -1) {
            reserve.splice(index, 1);
            return false;
        }
        
        index = reserve.indexOf(num + 1);
        if (index !== -1) {
            reserve.splice(index, 1);
            return false;
        }
        
        return true;
    })
    
    return n - lost.length;
}