#include<stdio.h>
main()
{
	int i;
	printf("®”‚ð“ü—ÍF");
	scanf("%d", &i);
	if (i >= 1 && i <= 49)
	{
		switch (i/10)
		{
		case 1:
			printf("‚P‚O“_‘ä‚Å‚·");
			break;
		case 2:
			printf("‚Q‚O“_‘ä‚Å‚·");
			break;
		case 3:
			printf("‚R‚O“_‘ä‚Å‚·");
			break;
		case 4:
			printf("‚S‚O“_‘ä‚Å‚·");
			break;
		}
	}
	else
	{
		printf("ƒGƒ‰[‚Å‚·‚à‚¤ˆê“x‚â‚è’¼‚µ‚Ä‚­‚¾‚³‚¢");
	}
}