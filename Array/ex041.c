#include<stdio.h>
main()
{
	float m=0,box[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("��������́F");
		scanf("%f",&box[i]);
		m += box[i];
	}
	printf("���v��%.2f�ł�\n ���ς�%.2f�ł�\n", m, m / 3);


}