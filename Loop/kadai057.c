#include<stdio.h>
main()
{
	char a;
	a = 0;
	printf("アルファベット小文字");
	scanf("%c", &a);
	for (a; a <= 'z'; a++)
	{
		printf("%C ", a-0x20);
	}
}