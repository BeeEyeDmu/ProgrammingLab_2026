#include <stdio.h>

int main()
{
	int a, b, c;
	int sum;
	float avg;

	printf("191115 강병익\n");

	printf("세개의 정수 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	sum = a + b + c;
	avg = sum / 3.0;

	printf("%d %.2f\n", sum, avg);

	return 0;
}