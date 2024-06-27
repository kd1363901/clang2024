#include<stdio.h>
main()
{
	int no,h=0,m=0,s=0;
	printf("•b”‚ğ“ü—ÍF");
	scanf("%d", &no);
	if (no < 5000) {
		h = no / 3600;
		m = (no % 3600) / 60;
		s = no % 60;
		printf("%dŠÔ%d•ª%d•b‚Å‚·\n",h,m,s);
	}
	else {
		printf("‚T‚O‚O‚O‚ğ’´‚¦‚é”’l‚ÍƒGƒ‰[‚Å‚·\n");
	}
}