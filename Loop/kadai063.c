#include<stdio.h>
main()
{
	int a;
	a = 0;
	while (a < 20)
	{
		a++;
		printf("%3d ", a);
		if (a % 10 == 0)
		{
			printf("\n");

		}
	} 
}