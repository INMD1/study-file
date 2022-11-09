const cacheSize = 3
const cities = ["Jeju", "Pangyo", "Seoul", "Jeju", "Pangyo", "Seoul", "Jeju", "Pangyo", "Seoul"]
console.log(solution(cacheSize, cities));
function solution(cacheSize, cities) {
    let num = 0
    for (let index = 0; index < cities.length; index++) {
        if(cities[index].length != cacheSize){
            num += 5
        }else{
            num += 1 
        }
    }
    return num
}