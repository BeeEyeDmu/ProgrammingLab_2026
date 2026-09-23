// 거듭제곱
#include <stdio.h>

int main()
{
	// x의 y승은 x를 y번 곱하는 것
	double x;
	int y;
	double r = 1;	// 곱할 때 초기값은 1

	printf("x의 y승을 구하는 x(실수), y(정수) 입력 : ");
	scanf_s("%lf %d", &x, &y);

	for (int i = 0; i < y; i++)	// y번 반복
		r *= x;

	printf("%f \n", r);

	return 0;
}