#include<stdio.h>
main()
{
	float f1,f2,f3,g;
	printf("��ڂ̎����F");
	scanf("%f", &f1);
	printf("��ڂ̎����F");
	scanf("%f", &f2);
	printf("�O�ڂ̎����F");
	scanf("%f", &f3);
	g = f1 + f2 + f3;
	printf("���v��%3.2f\n", g);
	printf("        ���ρ�%3.2f\n", (float)g / 3);
}