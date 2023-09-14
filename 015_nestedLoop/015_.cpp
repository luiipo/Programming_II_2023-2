#include <stdio.h>

// n을 입력받아 n개의 별을 n개의 줄로 출력하라
int main()
{
	int n;
	printf("n을 입력 : ");
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			printf("*");
		printf("\n");
	}
}