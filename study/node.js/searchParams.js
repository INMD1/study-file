const { url } = require("inspector");

const { URL } = require('url');

const myURL = new URL('https://www.google.com/search?q=node&oq=node&aqs=chrome..69i57j69i60l2j0j69i60j69i59l2.1708j0j1&sourceid=chrome&ie=UTF-8');
console.log('searchParms:', myURL.searchParams);
console.log('searchParams.getAll():', myURL.searchParams.getAll('category'));
console.log('searchParams.has():', myURL.searchParams.get('limi'));
console.log('searchParams.has():', myURL.searchParams.has('page'));

console.log('searchParmas.Keys():', myURL.searchParams.keys());
console.log('searchParms.values():', myURL.searchParams.values());

myURL.searchParams.append('filter', 'es3');

myURL.searchParams.append('filter', 'es5');
console.log(myURL.searchParams.getAll('filter'));

myURL.searchParams.set('filter', 'es6');
console.log(myURL.searchParams.getAll('filter'));

myURL.searchParams.delete('filter');
console.log(myURL.searchParams.getAll('filter'));

console.log('searchparams.tostring():', myURL.searchParams.toString());
myURL.search = myURL.searchParams.toString();
