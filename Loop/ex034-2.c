#include<stdio.h>
main()
{
	int i1,i2;
	printf("”‚ÍH");
	scanf("%d" ,&i1);
	do
	{
		i1--;
		i2 = 5;
		printf("\n");
		do {
			printf("*");

			i2--;

		} while (i2 >0);
	} while (i1 >0);
}