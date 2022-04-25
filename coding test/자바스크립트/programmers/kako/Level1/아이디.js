const input = "...!@BaT#*..y.abcdefghijklm"
console.log(solution(input));

function solution(new_id) {
    var answer = '';
    //1단계[확인]
    new_id = new_id.toLowerCase()
    
    //2단계[확인]
    new_id = new_id.replace(/[\{\}\[\]\/?,:|\)*~`!^\+<>@\#$%&\\\=\(\'\"]/g,"")
    //3단계[확인][.]{.,2}
    new_id = new_id.replace(/[.]{.,2}/g,"")

    //4단계[확인]
    for (let index = 0; index < 2; index++) {
        if(new_id[0] == "." || new_id[new_id.length - 1] == "."){
            new_id = new_id.replace(".","")
        }    
    }

    //5단계[확인]
    if(new_id.length == 0){
        new_id = new_id + "a"
    }

    //6단계[확인]
    new_id = new_id.substr(0,15)
    if(new_id[new_id.length - 1] == "."){
        new_id = new_id.replace(".","")
    }

    //7단계
    if(new_id.length < 3){
        while(1){
            if(new_id.length != 3){
                const re = new_id[new_id.length - 1]
                new_id += re
            }else{
                break
            }
        }
    }

    answer = new_id
    return answer;
}