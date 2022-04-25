const input = [1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5]	
const hand = "right"
console.log(solution(input, hand));

function getDistance( ax, ay, zx, zy ){
    var dis_x = ax - zx;
    var dix_y = ay - zy;
    dist = Math.ceil(Math.sqrt(Math.abs( dis_x * dis_x ) + Math.abs( dix_y * dix_y ) ))
    return dist;

}

function solution(numbers, hand) {
    let leftC = [1,4,7];
    let rightC = [3,6,9];
    let centerC = [2,5,8,0];
    
    let right = [3,2]; let left = [3,0];
    let answer = '';
    for (let index = 0; index < numbers.length; index++) {
        switch (numbers[index]) {
            case 1: case 4: case 7:
                left = [leftC.indexOf(numbers[index]),0]
                answer += "L"
            break;
            case 3: case 6: case 9:
                right = [rightC.indexOf(numbers[index]),2]
                answer += "R"
            break;
            default:
                let ohter = [centerC.indexOf(numbers[index]),1]
                let leftD = Math.ceil(Math.sqrt(Math.abs( left[0] * left[1] ) + Math.abs( ohter[0] * ohter[1])))
                let rightD = getDistance(right[0], right[1], ohter[0], ohter[1])
                if(leftD > rightD){
                    answer += "R"
                    right = ohter
                }else if(leftD < rightD){
                    answer += "L"
                    left = ohter
                }else{
                    if(hand == "right"){
                        answer += "R"
                        right = ohter
                    }else{
                        answer += "L"
                        left = ohter
                    }
                }
                break;
        }
    }
    return answer;
}