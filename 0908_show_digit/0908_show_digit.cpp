// 10진수를 한 자리씩 출력하기
#include <stdio.h>

// recursive sum
int sum(int n)
{
	if (n == 1)
		return 1;
	else
		return sum(n - 1) + n;
}

// recursive power
int power(int x, int y)
{
	if (y == 1)
		return x;
	else
		return power(x, y - 1) * x;
}

void show_digit(int x) 
{
	if (x / 10 == 0)
		printf("%d ", x);
	else {
		show_digit(x / 10);
		printf("%d ", x % 10);
	}
}

int main()
{
	int x;


	printf("x 입력 : ");
	scanf_s("%d", &x);

	show_digit(x);
	//printf("power = %d\n", power(x, y));

	return 0;
}