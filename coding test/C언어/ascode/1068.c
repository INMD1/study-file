#include <stdio.h> 


int sum(int a){
    if (a == 21) {
        return 0;
    }
    unsigned long long int result = 1;
    for (int c = 1; c <= a; c++) {
        result *= c;
    }
    printf("%llu\n", result);
    result = 1;
}

int main() {
    int a, b;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        sum(b);
    }
    return 0;
}