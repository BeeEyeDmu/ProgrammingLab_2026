// 구의 면적과 체적

#include <stdio.h>
#define PI	3.141592

int main()
{
	float radius;

	printf("반지름 : ");
	scanf_s("%f", &radius);

	printf("면적 = %.2f\n", 4 * PI * radius * radius);
	printf("체적 = %.2f\n", 4.0 / 3 * PI * radius * radius * radius);

	return 0;
}