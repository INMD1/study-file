#include <stdio.h>
#include <stdlib.h>
#define size 100

int main(){

    srand(time(NULL));
    int price[size];
    int min = 20000;
    int result = 0 ;
    printf("==========로그=========\n");
    for(int i = 0; i < size ; i++){
        price[i] = rand() % 10000+ 10000;
        if(min > price[i]){
            min = price[i];
            result = price[i];
        }
        printf("[%d] %d\n", i , price[i]);
    }
    printf("==========end========\n");
    printf("가격이 싼값: %d\n", result);   
}