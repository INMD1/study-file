import java.util.*

fun main(args: Array<String>){
    val sc =  Scanner(System.`in`)
    print("숫자를 입력해라고: ")
    val x = sc.nextInt()
    when(x){
        1 -> print("1입니다.")
        in 2..6 -> print("2~3중 이군요")
        !in 3..7 -> print("3~7에 범위가 포함되지 않아요.")
        else -> {
            print("현재 입력한 숫자는 없는 것입니다.")
        }
    }
    val v = 100
    // x downto y = x부터 y까지 반복
    // step n = n식 뛰면서 반복
    for(i in v downTo 10 step 2){
        println(i)
    }

    for (i in 0..v){
        println(i)
    }

}