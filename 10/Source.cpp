#include<stdio.h>
int main()
{
	int x[100][100], i, a, b, j, m, n, f;
	scanf_s("%d %d", &m, &n);
	scanf_s("%d ", &f);
	for (i = 0; i < f; i++)
	{
		
		if (1)
		{
			scanf_s("%d", &a);
			scanf_s("%d", &b);
			a = a--;
			b = b--;
			x[a][b] = 8;
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (x[i][j] == 8)
			{
				printf("x");
			}
			else printf("_");
		}
		printf("\n");
	}
	return 0;
}