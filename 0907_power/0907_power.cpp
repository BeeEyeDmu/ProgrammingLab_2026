// x의 y승을 순환함수로 만들기
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

int main()
{
	int x, y;


	printf("x, y 입력 : ");
	scanf_s("%d %d", &x, &y);

	printf("power = %d\n", power(x,y));

	return 0;
}