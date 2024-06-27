#include<stdio.h>
main()
{
	int gokei, ia,ib;
	float hekin;
	gokei = 0;
	ib = 0;
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &ia);
	while (ia != -999)
	{
		gokei += ia;
		ib++;
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d" ,& ia);
	}
	hekin = (float)gokei/ ib;
			printf("‡Œv%d\t•½‹Ï%.2f", gokei,hekin);
}