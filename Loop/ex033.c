#include<stdio.h>
main()
{
	int deta, sum, cnt;
	float ave;
	sum =0 ;
	cnt =0 ;
	printf("”‚ÍH");
	scanf("%d", &deta);
	for(;deta!=-999;)
	{
		sum += deta;
		cnt++;
		printf("”‚ÍH");
		scanf("%d" ,&deta);
	}
	ave = (float)sum/cnt;
			printf("‡Œv%d\t•½‹Ï%.2f",sum,ave);
}