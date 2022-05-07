const records = ["05:34 5961 IN", "06:00 0000 IN", "06:34 0000 OUT", "07:59 5961 OUT", "07:59 0148 IN", "18:59 0000 IN", "19:09 0148 OUT", "22:59 5961 IN", "23:00 5961 OUT"]
const fees = [180, 5000, 10, 600]

console.log(solution(fees, records));
//아직 풀고 있는 중
function solution(fees, records) {
    //초기 관리 데이터 생성
    var json = new Map();
    for (let index = 0; index < fees.length; index++) {
        json.set(fees[index], {intime: 0, status: undefined})
    }
    console.log(json);
    var answer = [];
    return answer;
}