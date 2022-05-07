var sd = "onezero2four9two21four7serven"
console.log(solution(sd));

function solution(s) { 
    const str_number = ['zero', 'one', 'two', 'three', 'four'
    , 'five', 'six', 'seven', 'eight', 'nine']
    const number = {zero: 0,one: 1, two: 2,three: 3,
        four:4,five:5,six:6, seven:7,eight:8, nine: 9 }
    
    for (let index = 0; index < 10; index++) {
        if(s.indexOf(str_number[index]) != -1){
            s = s.replace(new RegExp( str_number[index], 'g' ),number[str_number[index]])
        }
    }
    answer = s
    return parseInt(answer)
}