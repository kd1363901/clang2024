#include<stdio.h>
main()
{
	double a, b;
	printf("２つの実数値？");
	scanf("%lf%lf", &a, &b);
	if (a > b)
	{
		printf("大きいほうは%lf", a);
	}
	else
	{
		printf("大きいほうは%lf", b);
	}
}