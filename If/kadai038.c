#include<stdio.h>
main()
{
	char ch ;
	printf("•¶Žš‚ð“ü—ÍF");
	scanf("%c", &ch);
	if (ch>='A'&& ch<='Z')
	{
		printf("•ÏŠ·Œ‹‰Ê%c", ch + 0x20);
	}
	else
	{
		if (ch >= 'a' && ch <= 'z') 
		{
			printf("•ÏŠ·Œ‹‰Ê%c", ch - 0x20);
		}
		else
		{
			printf ("%c",ch);
		}
	}
}