#include<stdio.h>
main()

{
	int i1, i2;
	i2 = 0;
	while (1) 
	{
		printf("数を入れて:");
		scanf("%d", &i1);

		if (i1==-999) {
			break;
		}
		i2 += i1;
	}
	printf("合計＝%d\n", i2);
}