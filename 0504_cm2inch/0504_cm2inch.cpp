#include <stdio.h>

int main()
{
	float cm, feet, inch;

	printf("키(cm) : ");
	scanf_s("%f", &cm);

	inch = cm / 2.54;
	feet = (int)inch / 12;
	inch -= feet * 12;

	printf("%.2f cm는 %.0f feet %.2f inch", cm, feet, inch);

	return 0;
}