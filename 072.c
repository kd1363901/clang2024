#include<stdio.h>
void display(int a);
main()
{
	int a;
	printf("data?:");
	display(a);
}
void display(int a)
{
	printf("入力データ=%d\n", a);
}