#include <stdio.h>

int main()
{
	int n;

	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0) 
			printf("%d ", i);
		
	}
	printf("\n");
	for (int i = 1; i <= n; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
	printf("\n");


}