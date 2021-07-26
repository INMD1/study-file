#include <stdio.h>
#include <string.h>
int main() {

    char TestCase[2000];
    int count = 0;
    int c = 0;
    int r = 0;
    scanf("%d", &r);
    for (int d = 0; d < r; d++) {
        scanf("%s", &TestCase);
        for (c = 61; c <= 122; c++) {
            for (int i = 0; i < strlen(TestCase); i++) {
                if (c == TestCase[i]) {
                    count++;
                }
            }
            if (count > 0) {
                printf("%c:%d\n", c, count);
                count = 0;
            }
        }
        printf("\n");
    }
    return 0;
} 
