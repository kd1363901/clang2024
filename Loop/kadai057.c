#include<stdio.h>
main()
{
	char a;
	a = 0;
	printf("�A���t�@�x�b�g������");
	scanf("%c", &a);
	for (a; a <= 'z'; a++)
	{
		printf("%C ", a-0x20);
	}
}