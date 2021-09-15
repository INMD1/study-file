#include <stdio.h>

int main() {
    int a, b, c;
    int arr, v = 0, o = 0;
    unsigned long long  result = 1;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d", &b, &c);
        while (b) {
            o = (o * 10) + (b % 10);
            b = b / 10;
        }
        while (c) {
            v = (v * 10) + (c % 10);
            c = c / 10;
        }
        if (v + o < 100) { printf("%d\n", v + o); break; }
        else { arr = v + o; }
        while (arr)
        {
            if (arr % 10 == 0){
                result = result + (arr % 10);
                arr /= 10;
            }
            else {
                result = result * (arr % 10);
                arr /= 10;
            } 
        }
        printf("%llu\n", result);
        result = 1, v = 0, o = 0;
    }
}