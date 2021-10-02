const url = require('url');
const querstring = require('querystring');

const parsedUrl = url.parse('https://www.google.com/search?q=asd&oq=asd&aqs=chrome.0.69i59j46i67i199i275i291j0l5.1172j0j4&sourceid=chrome&ie=UTF-8');
const query = querstring.parse(parsedUrl.query);
console.log('querstring.parse():', query);
console.log('querstring.stringify():', querstring.stringify(query));