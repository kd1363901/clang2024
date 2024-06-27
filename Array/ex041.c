#include<stdio.h>
main()
{
	float m=0,box[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f",&box[i]);
		m += box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n •½‹Ï‚Í%.2f‚Å‚·\n", m, m / 3);


}