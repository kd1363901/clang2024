#include<stdio.h>
main()
{
	float f1;/*•Ï”‚ÌéŒ¾*/
	f1 = 10.5;/*‘ã“ü•¶*/
	printf("f1=%f\n", f1);
	printf("f1/2=%f\n", f1 / 2);
	printf("f1/4=%f\n",f1 / 4);
	int a = 5;  //éŒ¾‚Ì‚É‰Šú‰»‚·‚é‚±‚Æ‚à‚Å‚«‚Ü‚·
	float b;
	printf("a/2=%d\n", a / 2);  //®”Œ^“¯m‚ÌœZ
	b = a / 2;
	printf("a/2=%f\n", b);   //¬”“_ˆÈ‰º‚ğˆµ‚¤ê‡
	printf("a/2=%f\n", a / 2.0);
}