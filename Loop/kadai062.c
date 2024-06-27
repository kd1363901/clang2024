#include<stdio.h>
main()
{
	int a;
	a = 21;
	do
	{
		a--;
		printf("%3d ", a);
		if (a % 11 == 0)
		{
			printf("\n");

		}
	} while (a > 1);
}