#include <stdio.h>

int main()
{
	double salary;
	double year;

	// double은 입력받을 때는 %lf, 출력할때는 %f
	// float는 입력받을 때는 %f, 출력할때는 %f
	printf("연봉 입력 : ");
	scanf_s("%lf", &salary);

	printf("년수 : %.2f년\n", 100000 / salary);

	return 0;
}