fun main(args: Array<String>){
    val x = 5
    when(x){
        1 -> print("1입니다.")
        2, 3 -> print("2~3중 이군요")
        else{
            print("현재 입력한 숫자는 없는 것입니다.")
        }
    }
}