function solution(a, b) {
    let answer = 0;
    for (let index = 0; index < a.length; index++) {
      answer += a[index] * b[index]
    }
    return answer;
}