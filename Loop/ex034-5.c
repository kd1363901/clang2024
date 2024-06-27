#include<stdio.h>
main()
{
	int i1, i2, i3;
	printf("”‚ÍH");
	scanf("%d", &i1);
	i2 = 0;
	for (i2 = 0; i2 < i1; i2++)
	{
		for (i3 = 0; i3<i1-i2-1; i3++) 
		{
			printf(" ");
		}
		for (i3 = 0; i3 <i2+1 ; i3++) 
		{
			printf("*");
		}
		printf("\n");
	}
}