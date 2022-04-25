function solution(record) {
    let answer = []; let user = new Map();
    // ID[유저]상태 함수 만들기
    for (let index = 0; index < record.length; index++) {
        const temp = record[index].split(" ")
        if (temp[0] === "Enter" || temp[0] === "Change") {
            user.set(temp[1], temp[2])
        }
    }
    //결과값 출력
    for (let index = 0; index < record.length; index++) {
        const temp = record[index].split(" ")
        if(temp[0] == "Leave"){
            answer.push(`${user.get(temp[1])}님이 나갔습니다.`)
        }else if(temp[0] == "Enter"){
            answer.push(`${user.get(temp[1])}님이 들어왔습니다.`)
        }
    }
    return answer;
}