const url = require('url');

const { URL } = url;
const myURL =  new URL('https://inmd1.powertodays.com/gaebaleul-hagedoen-gyegi/');
console.log('new URL():', myURL);
console.log('url format():', url.format(myURL));
console.log('--------------------------------------');
const parseUrl = url.parse('https://inmd1.powertodays.com/gaebaleul-hagedoen-gyegi/');
console.log('url.parse():', parseUrl);
console.log('url.foramt():', url.format(parseUrl));
