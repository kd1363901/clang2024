#include<stdio.h>
main()
{
	char c;

	printf("��������́F");
	scanf("%c", &c);
	if (c >='A' && c<='Z')
	{
		printf("�啶���ł�\n");
	}
	else
	{
		if (c >= 'a' && c <= 'z')
		{
			printf("�������ł�\n");
		}
		else
		{
			printf("ERROR");
		}
	}
}