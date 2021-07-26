#include <stdio.h>
#include <stdlib.h>
#define size 100
int main(){
    int number[size];
    srand(time(NULL));
    int n,index;

    for(int i = 0; i < size ; i ++){
        i = rand() % 10 ;
        number[i] ++ ;
    }

    for(int i = 1; i < 10  ; i++){
        if(number[i] > number[index]){
            index = i;
        }
    }
    printf("가장많이 생성한 수는 %d 입니다.", index);
}