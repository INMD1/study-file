var input = 	[9, 20, 28, 18, 11]
var input2 = 	[30, 1, 21, 17, 28]
var n = 5
console.log(solution(n, input, input2));
function solution(n, arr1, arr2) {
    //함수
    var answer = [];  var out1 = ""; var out2 = ""
    
    function make(arry) {
        var temp1 = []
        for (let index = 0; index < arry.length; index++) {
            var turn =  arry[index].toString(2).length
            var output = arry[index].toString(2)
            var temp = "";
            for (let index = 0; index < n - turn; index++) {
                output = 0 + output
            }
            for (let index = 0; index < n; index++) {
                if (output[index] == 0) {
                    temp += " "
                } else {
                    temp += "#"
                }
            }
            temp1.push(temp);
        }
        if (out1 == "") {
            out1 = temp1
        } else {
            out2 = temp1
        }
    }
    make(arr1); make(arr2);
    var temp = ""
    for (let out = 0; out < n; out++) {
        for (let side = 0; side < n; side++) {
            if(out1[out][side] == "#" || out2[out][side] == "#"){
                temp = temp + "#"
            }else{
                temp = temp + " "
            }
        }
        answer.push(temp)
        temp = ""
    }
    return answer
}