const fs = require('fs')

const number = Math.random(10)
const sampledata = {
    test: number
}

function write(){
    const sample = JSON.stringify(sampledata)
    fs.writeFileSync('test.json', sample)
}


function read(){
    const loading = fs.readFileSync('test.json', 'utf8');
    return  loading;
}
console.log(JSON.parse(read()))

write();

setTimeout(() => {
    console.log(JSON.parse(read()))    
}, 3000);
