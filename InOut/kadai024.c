#include<stdio.h>
main() 
{
	int a,b;
	printf("整数？");
	scanf("%d%d", &a,&b);
	printf("%d+%d=%d\n", a,b,a+b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d/%d=%dあまり%d\n", a, b, a / b, a % b);
}