#include<stdio.h>
main()
{
	int a = 100, b;
	int* p_a;
	p_a = &a;
	printf("a=%d\n", a);
	printf(" &a = % d\n", &a);
	printf("p_a = % d\n", p_a);
	printf(" *p_a = % d\n", *p_a);
	printf("&p_a\n", &p_a);


}