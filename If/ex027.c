#include<stdio.h>
main()
{
	char ch ;
	printf("��������́F");
	scanf("%c", &ch);
	if (ch>='A'&& ch<='Z')
	{
		printf("�ϊ������%c", ch + 0x20);
	}
	else
	{
		if (ch >= 'a' && ch <= 'z') 
		{
			printf("�ϊ������%c", ch - 0x20);
		}
		else
		{
			printf ("�G���[");
		}
	}
}