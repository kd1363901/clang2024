#include<stdio.h>
main()
{
	int deta, sum, cnt;
	float ave;
	sum =0 ;
	cnt =0 ;
	printf("���́H");
	scanf("%d", &deta);
	for(;deta!=-999;)
	{
		sum += deta;
		cnt++;
		printf("���́H");
		scanf("%d" ,&deta);
	}
	ave = (float)sum/cnt;
			printf("���v��%d\t���ρ�%.2f",sum,ave);
}