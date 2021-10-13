class testa(val name: String){
    fun myget(){
        print("hello $name")
    }
}

fun main(){
    val a = "test"
    val send  = testa(a)
    send.myget()
}