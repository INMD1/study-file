#include<stdio.h>

int main() {

    int a, b, day = 0, count = 0, result;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        scanf("%d", &b);
        while (1)
        {
            if (count == 7) {
                count = 0;
            }

            if (count == 0) {
                b = b - 45000;
                day++;
                count++;
            }
            else if (count == 1) {
                b = b - 36000;
                day++;
                count++;
            }
            else if (count == 2) {
                b = b - 54000;
                day++;
                count++;
            }
            else if (count == 3) {
                count++;
            }
            else if (count == 4) {
                count++;
            }
            else if (count == 5) {
                b = b - 66000;
                day++;
                count++;
            }
            else if (count == 6) {
                b = b - 88000;
                day++;
                count++;
            }

            if (b <= 0) {
                break;
            }

        }
        printf("%d\n", day);
        count = 0;
        day = 0;
    }
    return 0;
}