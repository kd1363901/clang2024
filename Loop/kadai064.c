#include<stdio.h>
main()
{
	int a;
	a = 21;
	while (a > 1)
	{
		a--;
		printf("%3d ", a);
		if (a % 11 == 0)
		{
			printf("\n");

		}
	}
}