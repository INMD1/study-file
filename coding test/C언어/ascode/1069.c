#include <stdio.h> 

int main() {
    int a, b;
    unsigned long long int result = 1;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        for (int c = 1; c <= b; c++) {
            result *= c;
        }
        printf("%llu\n", result);
        result = 1;
    }
    return 0;
}