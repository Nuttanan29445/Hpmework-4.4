#include <stdio.h>
int main()
{
	int a[100], b, i, j, n;
	for (i = 1; i <= 7; i++)
	{
		printf("intput a[%d] = ", i);
		scanf_s("%d", &a[i]);

	}
	n = i - 1;
	for (i = 1; i < n; i++)
	{
		for (j = i + 1; j <= n; j++)
		{
			if (a[i] < a[j]) continue;
			else
			{
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
	for (i = 1; i <= n; i++)
	{

		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}