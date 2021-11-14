#include <stdio.h>
#include <string.h>

struct set
{
    /* data */
    char word[20];
    int score;
};

int main()
{

    //몇가지를 선언 해준다.
    struct set list[17];
    int a = 0, b = 0, rcount = 0, c, count = 0;
    char word1[20];
    //모든 배열을 0으로 초기화 시킨다  bro
    unsigned long long result[17] = {
        0,
    };

    scanf("%d %d", &a, &b);
    for (int i = 0; i < a; i++)
    {
        /* code */
        scanf("%s", &list[i].word);
        scanf("%d", &list[i].score);
    }
    while (1)
    {
        if (rcount == b)
        {
            break;
        }
        scanf("%s", word1);
        int u = strlen(word1);
        if (rcount != b)
        {
            if (word1[0] == '.')
            {
                rcount++;
            }
            else
            {
                for (c = 0; c < a; c++)
                {
                    if (u == strlen(list[c].word))
                    {
                        for (int i = 0; i < u; i++)
                        {
                            if (word1[i] == list[c].word[i])
                            {
                                count++;
                            }
                        }
                        if (count == u)
                        {
                            result[rcount] += list[c].score;
                        }
                        count = 0;
                    }
                }
            }
        }
    }
    for (int i = 0; i < b; i++)
    {
        printf("%llu\n", result[i]);
    }
    return 0;
}
