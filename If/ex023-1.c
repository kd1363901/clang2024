#include<stdio.h>
main()
{
	int no,h=0,m=0,s=0;
	printf("•b”‚ð“ü—ÍF");
	scanf("%d", &no);
	if (no> 0)
	{
		if (no < 5000) {
			h = no / 3600;
			m = (no % 3600) / 60;
			s = no % 60;
			printf("%dŽžŠÔ%d•ª%d•b‚Å‚·\n", h, m, s);
		}
		else {
			printf("‚T‚O‚O‚O‚ð’´‚¦‚é”’l‚ÍƒGƒ‰[‚Å‚·\n");
		}
	}
	else
	{
		printf("ƒ}ƒCƒiƒX‚ÍƒGƒ‰[‚Å‚·\n");
	}
}