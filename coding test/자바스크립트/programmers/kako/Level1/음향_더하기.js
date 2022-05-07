
function solution(absolutes, signs) {
    let answer = 0;
    for (let index = 0; index < absolutes.length; index++) {
        if(signs[index] == true){
            answer += absolutes[index]
        }else if(signs[index] == false){
            answer += absolutes[index] * -1
        }
    }
    return answer;
}