const st = [4,4,4,4,4]
const v = 4
console.log(solution(v, st));

function solution(N, stages) {
    let answer = []; let temp = []
    for (let an = 1; an < (N + 1); an++) {
        let Yes = 0; let No = 0
        for (let index = 0; index < stages.length; index++) {
            if (an > stages[index]) {
                Yes++
            } else if (an == stages[index]) {
                No++
            }
        }
        if (No == 0) {
            temp.push({ name: an, value: 0 })
        } else {
            temp.push({ name: an, value: No / (stages.length - Yes) * 100 })
        }
    }
    temp.sort(function (a, b) {
        return a.value > b.value ? -1 : a.value > b.value ? 1 : 0;
    });
    for (let index = 0; index < temp.length; index++) {
        answer.push(temp[index].name)
    }
    return answer;
}

//[3,4,2,1,5]