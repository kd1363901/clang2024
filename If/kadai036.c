#include<stdio.h>
main()
{
	int no,mo;
	printf("®”‚ð“ü—ÍF");
	scanf("%d", &no);
	printf("®”‚ð“ü—ÍF");
	scanf("%d", &mo);
	if (no > mo) 
	{
		printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢\n",no,mo,no-mo);
	}
	else
	{
		if (no < mo)

		{
			printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢\n", no, mo,no-mo);
		}
	}
	
		if (no == mo)
		{
			printf("%d‚Æ%d‚Í“™‚µ‚¢\n",no,mo);
		}
	
}