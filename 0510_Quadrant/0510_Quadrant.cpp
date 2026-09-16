// 조건연산자로 사분면 찾기

#include <stdio.h>

int main()
{
	int x, y;

	printf("좌표 입력(x y) : ");
	scanf_s("%d %d", &x, &y);

	(x > 0 && y > 0) ? printf("1사분면") : printf("");
	(x < 0 && y > 0) ? printf("2사분면") : printf("");
	(x < 0 && y < 0) ? printf("3사분면") : printf("");
	(x > 0 && y < 0) ? printf("4사분면") : printf("");
}