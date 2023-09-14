#include <stdio.h>
int main()
{
	int n;
	printf("n을 입력 : ");
	scanf_s("%d", &n);

	int fact = 1;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		fact *= i;
		printf("%d! : %d\n", i, fact);
	}
	for (int i = 1; i <= n; i++) {
		sum += i;
		printf("1부터 %d까지의 합 = %d\n", i, sum);
	}
	
	int x;
	for (;;) {
		printf("0을 입력할 때까지 계속됩니다.");
		scanf_s("%d", &x);
		if (x == 0)
			break;
	}
	
	

}