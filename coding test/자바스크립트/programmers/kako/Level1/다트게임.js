let dar = "1S*2T*3S"
console.log(solution(dar));
function solution(dartResult) {
    let answer = 0; let temp = 0; let array = []
    for (let index = 0; index < dartResult.length; index++) {

        //문자열 숫자변환
        if (parseInt(dartResult[index] + dartResult[index + 1]) == 10) {
            temp = 10
            index++;
        } else if (parseInt(dartResult[index]) <= 9) {
            temp = parseInt(dartResult[index]);
        }
        switch (dartResult[index]) {
            case "S":
                array.push(temp)
                break;
            case "D":
                array.push(Math.pow(temp, 2))
                break;
            case "T":
                array.push(Math.pow(temp, 3))
                break;
            case "#":
                array[array.length - 1] = array[array.length - 1] * -1
                break;
            case "*":
                array[array.length - 1] = array[array.length - 1] * 2
                array[array.length - 2] = array[array.length - 2] * 2
                break;
        }

        console.log(array);
    }
    answer = array.reduce((previousValue, currentValue) => previousValue + currentValue)

    return answer;
}