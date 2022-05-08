const records = ["16:00 3961 IN","16:00 0202 IN","18:00 3961 OUT","18:00 0202 OUT","23:58 3961 IN"]
const fees = [120, 0, 60, 591] //기본 시간(분)	//기본 요금(원)	//단위 시간(분)	//단위 요금(원)

console.log(solution(fees, records));
//아직 풀고 있는 중
function solution(fees, records) {
    //초기 관리 데이터 생성
    let json = new Map(); let answer = []; 
    for (let index = 0; index < records.length; index++) {
        let temp = records[index].split(" ");
        json.set(temp[1], { hour: 0, min: 0, time : 0, price: 0, IN: "Y" })
        answer.push(temp[1])
    }
    const uniq = array => [...new Set(array)];
    answer = uniq(answer).sort();
    //정적인 
    for (let index = 0; index < records.length; index++) {
        let temp = records[index].split(" ");
        let time = ""
        if (temp[2] == 'IN') {
            time = temp[0].split(":");
            json.get(temp[1]).IN = "Y"
            json.get(temp[1]).price = 0
            json.get(temp[1]).hour = time[0]
            json.get(temp[1]).min = time[1]
        }else if(temp[2] == 'OUT'){
            let Calculator = 0
            time = temp[0].split(":");
            json.get(temp[1]).IN = "U"   
            Calculator +=  (time[0] - json.get(temp[1]).hour) * 60
            Calculator +=  (time[1] - json.get(temp[1]).min)
            json.get(temp[1]).time += Calculator
        }
    }
    //마지막으로 확인
    for (let index = 0; index < answer.length; index++) {
        let temp = records[index].split(" ");
        let time = ""
        if(json.get(answer[index]).IN ==  "Y" ){
            let Calculator = 0
            time = temp[0].split(":");
            json.get(answer[index]).IN = "U"   
            Calculator +=  (23 - json.get(answer[index]).hour) * 60
            Calculator +=  (59 - json.get(answer[index]).min)
            json.get(answer[index]).time += Calculator
        }
        //확인 하면 바로 정산 ㄱㄱ
        if(json.get(answer[index]).time <= fees[0]){
            answer[index] = fees[1]
        }else{
            answer[index] = fees[1] + Math.ceil(((json.get(answer[index]).time - fees[0]) / fees[2]))*fees[3]
        }
    }
    return answer;
}