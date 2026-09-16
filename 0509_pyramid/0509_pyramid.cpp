#include <stdio.h>

int main()
{
	float ac, ae, bc, de;

	printf("지팡이 높이 : ");
	scanf_s("%f", &bc);

	printf("지팡이 그림자 길이 : ");
	scanf_s("%f", &ac);

	printf("피라미드까지 거리 : ");
	scanf_s("%f", &ae);

	de = ae * bc / ac;
	printf("피라미드의 높이 = %.2f\n", de);

	return 0;
}