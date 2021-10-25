#include <stdio.h>

int main(void){
    int a = 10;
    int *p ;
    int *c ;
    p = &a;
    
    printf("%d\n", ++*p);
    printf("%d\n", (*p)++); // ++는 후연산에서 실행이 된다
    printf("%d", *p);
}
