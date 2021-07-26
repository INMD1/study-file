#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i < a; i++) {
        if (i / 10 == 3  || i % 10 == 3 || i % 3 == 0 ) {
            printf("%d ", i);
        }
    }
    return 0;
}
