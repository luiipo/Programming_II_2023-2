#include <stdio.h>

int main()
{
	
	int sum = 0; // 반드시 초기화
	int n;

	printf("정수를 입력하세요 : ");
	scanf_s("%d", &n);

	/*int i = 1;
	while (i <= n)
	{
		sum += i;
		i++;
	}*/
	int i;
	for (i = 1; i <= n; i++)
		sum += i;
	printf("%d\n", i);
	printf("sum = %d\n", sum);
}