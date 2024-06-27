#include<stdio.h>
main()
{
	int a;
	a = 0;
	do
	{
		a++;
		printf("%3d ", a);
		if (a % 10 == 0)
		{
			printf("\n");

		}
	} while (a < 20);
}