#include <stdio.h>

int check_alpha(char c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}

int main()
{
	char c;

	printf("문자 입력 : ");
	c = getchar();

	if (check_alpha(c) == 1)
		printf("%c는 알파벳 문자입니다.\n", c);
	else
		printf("%c는 알파벳 문자가 아닙니다.\n", c);

	return 0;
}