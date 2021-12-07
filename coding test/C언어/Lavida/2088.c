#include <stdio.h>
#include <string.h>

int main()
{
    int m, n, k;
	while (1)
	{
		int result = 0;
		scanf("%d %d %d", &m, &n, &k);
		if (m == 0 && n == 0 && k == 0) {
			break;
		}
		for (int i = m; i <= n; i++)
		{
			result += i;
		}
		if (result % k == 0) {
			printf("YES\n");
			continue;
		}
		else{
			printf("NO\n");
			continue;
		}
	}
    return 0;
}