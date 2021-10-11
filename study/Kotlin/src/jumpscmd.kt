fun main(){
        loop@ for (i in 1..100){
            for (j in 1..100){
               if(j > 5){
                   break@loop
                }else{
                    println(j)
                }
            }
       }

    listOf(1,2,3,4,5).forEach{
        if(it == 3)return
        print(it)
    }
    println("난 몰루")
}