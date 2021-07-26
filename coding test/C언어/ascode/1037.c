#include <stdio.h>

int main() {
    int b = 0;
    long int a = 0;
    long int week = 0, day = 0, hour = 0, min = 0;
    unsigned int sec = 0;
        scanf("%d", &a);

        week = a / (60 * 60 * 24 * 7);

        day = a / (60 * 60 * 24) - (7*week) ;

        hour = (a % (60 * 60 * 24)) / (60 * 60);

        min = (a % (60 * 60)) / 60;

        sec = a % 60;
        printf("%d %d %d %d %u",week, day, hour, min, sec);
        day = 0, hour = 0, min = 0, sec = 0;
    return 0;
}