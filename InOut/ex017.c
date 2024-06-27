#include<stdio.h>
main()
{
	float f1,f2,f3,g;
	printf("一つ目の実数：");
	scanf("%f", &f1);
	printf("二つ目の実数：");
	scanf("%f", &f2);
	printf("三つ目の実数：");
	scanf("%f", &f3);
	g = f1 + f2 + f3;
	printf("合計＝%3.2f\n", g);
	printf("        平均＝%3.2f\n", (float)g / 3);
}