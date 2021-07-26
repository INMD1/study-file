#include <stdio.h>

int main() {
    int a = 65;
    
    for(int i = 0; i < 9 ; i++){
        printf("%d : %c\n", a,a);
        a++;
    }
}