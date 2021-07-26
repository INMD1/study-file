#include <stdio.h>
#define size 5

int main(){
    int i,c = 0;
    int scorel[size];

    for(i = 0; i < size ; i++){
        scorel[i] = i*10;
    }


    for(i = 0; i <size; i++){

        printf("scores[%d]=%d\n", i , scorel[i]);
    }

    
}