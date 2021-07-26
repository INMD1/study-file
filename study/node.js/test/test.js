const nuk = []
for(let a = 1 ; a<999 ; a++ ){
    var num = Math.floor(Math.random()*99)+1; //99 1~99까지 숫자중 하나를 출력함
    if(nuk.indexOf(num) == -1){
      nuk.push(num)
    }
    if(nuk.length == 1){
      break // 1개 까지 나오면 멈추기 (늘릴거면 1를 바꾸세요.)
    }
  }
 console.log(nuk)