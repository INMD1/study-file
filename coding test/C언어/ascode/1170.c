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
    struct data list[20];
    int p, m, n; // p: 가점단어 ,m : 감점단어 , n: 문장개수
    int c;
    int num, result = 0, check = 0;
    int count = 0;
    char oword[25];

    scanf("%d %d %d", &p, &m, &n);
    for (int i = 0; i < (p + m); i++) {
        scanf("%s", &list[i].arr);
        scanf("%d", &list[i].price);
    }
    for (int i = 0; i < n; i++) {
        while (1) {
            scanf("%s", oword);
            if (oword[0] == '.') {
               if (check == 0) {
                       printf("%d\n", result);
               }else {
                  if (result / check <= 0) {
                       printf("FAIL\n");
                  }else {
                       printf("%d\n", result / check  );
                  }
               }
                result = 0, check = 0;
                break;
            }
            else {
                num = strlen(oword);
                result += num;
                for (int i = 0; i < (p + m); i++)
                {
                    //가점
                    if (i < p) {
                        if (num == strlen(list[i].arr)) {
                            for (c = 0; c < num; c++)
                            {
                                if (tolower(oword[c]) == tolower(list[i].arr[c])) {
                                    count++;
                                }
                            }
                            if (count == num) {
                                result += list[i].price;
                                result -= num;
                            }
                            count = 0;
                        }
                    }
                    //감점
                    else {
                        if (num == strlen(list[i].arr)) {
                            for (c = 0; c < num; c++)
                            {
                                if (tolower(oword[c]) == tolower(list[i].arr[c])) {
                                    count++;
                                }
                            }
                            if (count == num) {
                                
                                result -= list[i].price;
                                result -= num;
                                check++;
                            }
                            count = 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}