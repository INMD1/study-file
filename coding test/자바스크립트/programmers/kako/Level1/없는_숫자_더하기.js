const numbers= [1,2,3,4,6,7,8,0]
console.log(solution(numbers));
function solution(numbers) {
    let answer = 0 
    for (let index = 0; index < 10; index++) {
        if(numbers.indexOf(index) == -1){
            answer += index
        }
    } 
    return answer;
}