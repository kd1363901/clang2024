#include<stdio.h>
main()
{
	int i1, i2,kotae;
	kotae = 0;
	while (1)
	{
		printf("®”1(-999‚ÅI—¹)?");
		scanf("%d", &i1);
		if (i1 == -999)
		{
			break;
		}
		printf("®”2(-999‚ÅI—¹)?");
		scanf("%d", &i2);
		if (i2 == -999)
		{
			break;
		}
		kotae = i1 / i2;
		printf("%d/%d=%d‚ ‚Ü‚è%d\n", i1, i2, kotae, i1 % i2);
	}
}