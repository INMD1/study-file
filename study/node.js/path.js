const path = require(`path`);

const string = __filename;

console.log(`path.sep`, path.sep);
console.log(`path.delimiter`, path.delimiter);
console.log(`-------------------------------`);
console.log(`path.dirname`, path.dirname(string));
console.log(`path.extname`, path.extname(string));
console.log(`path.basename`, path.basename(string));
console.log(`path.basename - extname:`, path.basename(string, path.extname(string)));
console.log(`--------------------------------`);
console.log(`path.parse()`, path.parse(string));
console.log(`path.format()`, path.format({
    dir: `경로`,
    name: `path`,
    ext: `js`
}));
console.log(`path.normalize()`,path.normalize(`경로`));
console.log(`---------------------------------`);
console.log(`path.isAbsolute()`, path.isAbsolute(`경로`));
console.log(`path.isAbsolute()`, path.isAbsolute(`경로2`));
console.log(`---------------------------------`);
console.log(`path.relative`, path.relative(`경로1, 경로2`));
console.log(`path.join`, path.join(__dirname, `..`, `..`, `user`, `.`));
console.log(`path.resolve`, path.resolve(__dirname, `..`, `..`, `user`, `.`));
