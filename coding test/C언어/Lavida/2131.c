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
	int testcase, stop = 0, p = 0, temp = 0;
	int a, b, c, u, count = 0;
	int ccunt = 0, discount = 0;
	char oword[25];
	scanf("%d", &testcase);
	for (int i = 0; i < testcase; i++)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		for (int i = 0; i < a; i++)
		{
			scanf("%s", &list[i].arr);
			scanf("%d", &list[i].price);
		}
		for (int i = 0; i < b; i++)
		{
			while (1)
			{
				scanf("%s", &oword);
				u = strlen(oword);
				ccunt += (u % 10);
				if (oword[0] == '.')
				{
					printf("%d\n", (ccunt - temp - 1) - discount);
					ccunt = 0, discount = 0, count = 0, temp = 0;
					break;
				}
				else
				{
					for (c = 0; c < a; c++)
					{
						if (u == strlen(list[c].arr))
						{
							for (int i = 0; i < u; i++)
							{
								if (tolower(oword[i]) == tolower(list[c].arr[i]))
								{
									count++;
								}
							}
							if (count == u)
							{
								discount += list[c].price;
								temp += (u % 10);
								count = 0;
							}
							else if (count != u)
							{
								p++;
								count = 0;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}