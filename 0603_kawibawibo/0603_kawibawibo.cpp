#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//int x, y;

	//srand(time(0));

	//x = rand();	// 0~32767 (16비트)
	//y = rand();

	int human, comp;

	srand(time(0));

	printf("(가위 = 1, 바위 = 2, 보 = 3) 중 하나를 선택하세요 : ");
	scanf_s("%d", &human);

	comp = rand() % 3 + 1;

	if (human == 1 && comp == 2 || 
		human == 2 && comp == 3 ||
		human == 3 && comp == 1)
		printf("컴퓨터 = %d, 컴퓨터 Win\n", comp);
	else if( human == 1 && comp == 1 ||
		human == 2 && comp == 2 || 
		human == 3 && comp == 3 )
		printf("컴퓨터 = %d, 비김!\n", comp);
	else
		printf("컴퓨터 = %d, 사람 Win!\n", comp);

	// 가위, 바위, 보 게임을 하기위해
	// rand() 값을 사용한다면,
	// 가위 = 0, 바위 = 1, 보 = 2로 정하고
	// rand() 값을 3으로 나눈 나머지로 정한다

	return 0;
}