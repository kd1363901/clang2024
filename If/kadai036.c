#include<stdio.h>
main()
{
	int no,mo;
	printf("整数を入力：");
	scanf("%d", &no);
	printf("整数を入力：");
	scanf("%d", &mo);
	if (no > mo) 
	{
		printf("%dの方が%dより%d大きい\n",no,mo,no-mo);
	}
	else
	{
		if (no < mo)

		{
			printf("%dの方が%dより%d小さい\n", no, mo,no-mo);
		}
	}
	
		if (no == mo)
		{
			printf("%dと%dは等しい\n",no,mo);
		}
	
}