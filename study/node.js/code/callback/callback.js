/*
function a(){
    console.log('A');
}
*/
var a = function(){
    console.log('A');
}


function slowFun(callback){
    callback();
}

slowFun(a);