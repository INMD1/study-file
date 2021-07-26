#include <stdio.h>

int main(){
    int a,b, result = 0;
     printf("시작정수: ");
     scanf("%d", &a);

     printf("종료정수: ");
     scanf("%d", &b);

     for(int i = a; i<=b; i++){
        result= result + i ;
     }
     printf("Sum %d to %d = %d\n",a,b,result);
}