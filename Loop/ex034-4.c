#include<stdio.h>
main()
{
	int i1, i2, i3;
	printf("”‚ÍH");
	scanf("%d", &i1);
	i2 = 0;
	do
	{
		i3 = 0;
		do {
			printf(" ");
			i3++;
		} while(i3<i1-i2);
		i3 = 0;
		do {
			printf("*");
			i3++;

		} while (i3 < i2 + 1);
		printf("\n");
		i2++;
	} while (i3 < i1);
}