#include <stdio.h>

int main()
{
	int n;
	printf("n을 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n * i);
	printf(" ");


	for (int j = 2; j <= 9; j++) {
		for (int i = 1; i <= 9; i++)
			printf("%d * %d = %d\n", j, i, j * i);
		printf(" ");
	}
}

