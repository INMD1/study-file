#include <stdio.h>
 
int main() {
    int b = 0;
    long int a = 0;
    long int  day = 0, hour = 0, min = 0;
    unsigned int sec = 0;
    scanf("%d", &b);
    for (int i = 0; i < b; i++) {
        scanf("%d", &a);
 
        day = a / (60 * 60 * 24);
 
        hour = (a % (60 * 60 * 24)) / (60 * 60);
 
        min = (a % (60 * 60)) / 60;
 
        sec = a % 60;
        printf("%d day : %d hour : %d min : %u sec\n", day, hour, min, sec);
        day = 0, hour = 0, min = 0, sec = 0;
    }
    return 0;
}