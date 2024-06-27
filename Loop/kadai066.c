#include<stdio.h>
main()
{
	int i=1,gokei=0;
	do
	{
		printf("%d+", i);
		gokei += i;
		i++;
	}while (gokei <= 300);
	printf("\b=%d\n",gokei);
}
