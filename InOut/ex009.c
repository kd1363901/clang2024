#include<stdio.h>
main()
{
	float f1;/*変数の宣言*/
	f1 = 10.5;/*代入文*/
	printf("f1=%f\n", f1);
	printf("f1/2=%f\n", f1 / 2);
	printf("f1/4=%f\n",f1 / 4);
	int a = 5;  //宣言の時に初期化することもできます
	float b;
	printf("a/2=%d\n", a / 2);  //整数型同士の除算
	b = a / 2;
	printf("a/2=%f\n", b);   //小数点以下を扱う場合
	printf("a/2=%f\n", a / 2.0);
}