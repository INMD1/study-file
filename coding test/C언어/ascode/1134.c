#include <stdio.h>
#include <string.h>
#include <ctype.h>
struct data
{
    char arr[25];
    int price;
};
 
int main()
{
    struct data list[10];
    int a, b, c, num, ccunt = 0, ccc = 0;
    int count = 0;
    char oword[25];
 
    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++) {
        scanf("%s", &list[i].arr);
        scanf("%d", &list[i].price);
    }
 
    for (int i = 0; i < b; i++) {
        while (1) {
            scanf("%s", oword);
            if (oword[0] == '.') {
                if (ccunt < 0) {
                    printf("Fail\n");
                }
                else {
                    printf("%d\n", ccunt / ccc);
                }
                ccunt = 0, ccc = 0;
                break;
            }
            else {
                num = strlen(oword);
                ccc++;
                ccunt += (num * num);
                for (int i = 0; i < a; i++)
                {
                    if (num == strlen(list[i].arr)) {
                        for (c = 0; c < num; c++)
                        {
                            if (tolower(oword[c]) == tolower(list[i].arr[c])) {
                                count++;
                            }
                        }
                        if (count == num) {
                            ccunt -= list[i].price;
                            ccunt -= (num * num);
                            ccc--;
                        }
                        count = 0;
                    }
                }
            }
        }
    }
    return 0;
}