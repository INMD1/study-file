var fs = require('fs')

console.log('A')
fs.readFile('sample.txt', 'utf8', function(err, data){
    console.log("비동기 파일 읽기 내용: " +  data)
});
console.log('C')

//error 구현

try {
   console.log(fs.readFileSync('sample.txt', 'utf8')) ;
} catch (error) {
    console.log('파일 또는 코드에 에려가 발생함');
}