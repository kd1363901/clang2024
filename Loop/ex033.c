#include<stdio.h>
main()
{
	int deta, sum, cnt;
	float ave;
	sum =0 ;
	cnt =0 ;
	printf("数は？");
	scanf("%d", &deta);
	for(;deta!=-999;)
	{
		sum += deta;
		cnt++;
		printf("数は？");
		scanf("%d" ,&deta);
	}
	ave = (float)sum/cnt;
			printf("合計＝%d\t平均＝%.2f",sum,ave);
}