#include<stdio.h>
main()
{
	int gokei, ia,ib;
	float hekin;
	gokei = 0;
	ib = 0;
	printf("®”i|‚X‚X‚X‚Ü‚ÅI—¹j");
	scanf("%d", &ia);
	do
	{
		gokei += ia;
		ib++;
		printf("®”i|‚X‚X‚X‚Ü‚ÅI—¹j");
		scanf("%d" ,& ia);
	}while (ia != -999);
	hekin = (float)gokei/ ib;
			printf("‡Œv%d\t•½‹Ï%f", gokei,hekin);
}