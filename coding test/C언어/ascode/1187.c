#include <stdio.h> 

int main() {
    long long int  a;
    scanf("%lld", &a);
    if ( a % 2 == 0) {
        if (a % 7 == 0 || a % 3 == 0) {
            printf("Magic");
        }
        else {
            printf("No Magic");
        }
    }
    else {
        printf("No Magic");
    }
    
    return 0;
}