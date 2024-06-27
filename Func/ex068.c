#include<stdio.h>
main()
{
	int c;
	char d[256];
	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		putchar('\n');
		gets (d);
		c = getchar();

	}
}