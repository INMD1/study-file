const input =  ["muzi", "frodo", "apeach", "neo"]
const r = ["muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"]
const kk = 2

console.log(solution(input, r, kk));
function solution(id_list, report, k) {
    let answer = []; let ban = []; let result = [];


    //중복들은 제한다는 소리이다.
    report = new Set(report)
    report = Array.from(report)

    //리스트 만들기
    for (let index = 0; index < id_list.length; index++) {
        ban[id_list[index]] = []
        result[id_list[index]] = { send: 0 }
    }

    //신고당한 횟수또는 밴 당한 사람 확인
    for (let index = 0; index < report.length; index++) {
        let info = report[index].split(" ")
        ban[info[1]].push(info[0])
    }
    for (let index = 0; index < id_list.length; index++) {
        if(ban[id_list[index]].length >= k){
           for (let ID = 0; ID < ban[id_list[index]].length; ID++) {
                result[ban[id_list[index]][ID]].send ++
           }
        }
    }

    for (let index = 0; index < id_list.length; index++) {
        answer.push(result[id_list[index]].send);
    }
    return answer;
}