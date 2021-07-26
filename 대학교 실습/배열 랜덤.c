#include <stdio.h>
#include <stdlib.h>
#define size 5000


int main(){

    srand(time(NULL));
    int i,c = 0;
    int scorel[size];
    
    for(i = 0; i <size; i++){
        scorel[i] = rand();
        printf("scores[%d]=%d\n", i , scorel[i]);
    }

}