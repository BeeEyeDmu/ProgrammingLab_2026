// 2자리 숫자 복권
// 2자리 모두 일치하면 100만원
// 2자리 중 하나만 일치하면 50만원
// 하나도 일치하지 않으면 0원

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int my, lottery;

	printf("복권 번호 입력(두자리수) : ");
	scanf_s("%d", &my);

	srand(time(0));	// 랜덤 시드 설정
	lottery = rand() % 100;	// 0부터 99까지 랜덤 숫자

	printf("당첨 번호는 %d입니다\n", lottery);

	int cnt = 0;

	if (my / 10 == lottery / 10)
		cnt++;
	if (my % 10 == lottery % 10)
		cnt++;

	if (cnt == 2)
		printf("상금 : 100만원\n");
	else if(cnt == 1)
		printf("상금 : 50만원\n");
	else
		printf("상금 : 없습니다\n");

	return 0;
}