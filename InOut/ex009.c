#include<stdio.h>
main()
{
	float f1;/*�ϐ��̐錾*/
	f1 = 10.5;/*�����*/
	printf("f1=%f\n", f1);
	printf("f1/2=%f\n", f1 / 2);
	printf("f1/4=%f\n",f1 / 4);
	int a = 5;  //�錾�̎��ɏ��������邱�Ƃ��ł��܂�
	float b;
	printf("a/2=%d\n", a / 2);  //�����^���m�̏��Z
	b = a / 2;
	printf("a/2=%f\n", b);   //�����_�ȉ��������ꍇ
	printf("a/2=%f\n", a / 2.0);
}