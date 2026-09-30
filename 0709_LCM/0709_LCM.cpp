// 최대공약수를 이용하여 최소공배수 구하기
// 두 자연수의 곱 = 최대공약수(G) × 최소공배수(L)
// A x B = G x L
// L = B * G / A

#include <stdio.h>

int main()
{
	int x, y;

	printf("두 수 입력 : ");
	scanf_s("%d %d", &x, &y);

	int max = (x > y) ? x : y;	// 조건연산자

	for (int i = max; ; i++) {
		if (i % x == 0 && i % y == 0) {
			printf("LCM = %d\n", i);
			break;
		}
	}

	return 0;
}