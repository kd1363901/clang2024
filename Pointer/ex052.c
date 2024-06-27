#include<stdio.h>
main()
{
	int a,b,w;
	int*p_a,*p_b;
	a = 100;
	b = 200;
	p_a = &a;
	p_b = &b;
	printf("é¿çsëO	a=%d	b=%d\n", a, b);
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;
	printf("é¿çså„	a=%d	b=%d\n", *p_a, *p_b);
}