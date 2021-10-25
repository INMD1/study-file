const xml2js = require('xml2js');
const request = require('request');
const fs = require("fs");

const HOST = 'https://raw.githubusercontent.com/INMD1/study-file/main/departmentList.xml'


// var requestUrl = `${HOST}`

// request.get(requestUrl, (err,res,body) =>{
//     xml2js.parseString(body, { mergeAttrs: true }, (err, result) => {
//         if (err) {
//             throw err;
//         }
    
//         // `result` is a JavaScript object
//         // convert it to a JSON string
//         const json = JSON.stringify(result, null, 4);
    
//         // save JSON in a file
//         fs.writeFileSync('user.json', json, "utf-8");

//     }); 
// })

const data = fs.readFileSync("user.json", "utf-8");
const datajoson = JSON.parse(data)
console.log(datajoson.Root.content[1].schoolName[0])
