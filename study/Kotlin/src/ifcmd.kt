import java.util.*

fun main(args: Array<String>){
        val sc: Scanner = Scanner(System.`in`)
        val input = sc.nextInt()

        val a = if(input < 100){
                print("100보다 적음")
        }else{
                print("100보다 많음")
        }
        a
}