#include<stdio.h>
main()
{
	int i;
	printf("整数を入力：");
	scanf("%d", &i);
	if (i >= 1 && i <= 49)
	{
		switch (i/10)
		{
		case 1:
			printf("１０点台です");
			break;
		case 2:
			printf("２０点台です");
			break;
		case 3:
			printf("３０点台です");
			break;
		case 4:
			printf("４０点台です");
			break;
		}
	}
	else
	{
		printf("エラーですもう一度やり直してください");
	}
}