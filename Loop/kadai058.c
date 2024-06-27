#include<stdio.h>
main()
{
	int a;
	for (a=32;a<=126;a++)
	{
		if (a % 10 == 0)
		{
			printf("%c %x ", a,a);
		}
	}
}