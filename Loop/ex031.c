#include<stdio.h>
main()
{
	int gokei,i;

	gokei = 0;
	i =1 ;
	for (i=1; i<= 10; i++)
	{
		gokei += i;
		printf("1から%dまでの和=%d\n", i, gokei);
	}
}