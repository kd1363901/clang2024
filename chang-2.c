#include<stdio.h>
main()
{
	int a, b;
	a = 5, b = 3;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("a=%d  b=%d\n", a, b);
}