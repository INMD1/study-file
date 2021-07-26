#include<stdio.h> 

int main()
{
	int a = 0, b = 0;
	int a1[362];
	for (int i = 0; i < 361; i++)
	{
		scanf("%d", &a1[i]);
	}
	for (int i = 0; i < 361; i++)
	{
		if (a1[i] == 1)
		{
			a++;
		}else if (a1[i] == 2)
		{
			b++;
		}
	}
	printf("%d %d", a, b);
    return 0;
}
