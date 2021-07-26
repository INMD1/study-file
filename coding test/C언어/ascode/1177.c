#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a == 100) {
        printf("Perfect! Congratulations!");
    }
    else if (a <= 99 && a >= 90)
    {
        printf("Very good!");
    }
    else if (a <= 89 && a >= 80)
    {
        printf("Good!");
    }
    else if (a <= 79 && a >= 70)
    {
        printf("Not bad!");
    }
    else if (a <= 69 && a >= 0)
    {
        printf("Study hard!");
    }
    return 0;
}