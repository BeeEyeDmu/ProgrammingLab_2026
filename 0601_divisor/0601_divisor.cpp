#include <stdio.h>

int main()
{
	int x, y;

	printf("두 수 입력 : ");
	scanf_s("%d %d", &x, &y);

	if (x % y == 0)
		printf("%d는 %d의 약수입니다\n", y, x);
		
	return 0;
}