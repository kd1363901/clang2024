#include<stdio.h>
main()
{
	char m;
	int i1,i2,i3;

	printf("��������́F");
	scanf("%c", &m);

	printf("��������́F");
	scanf("%d%d%d", &i1,&i2,&i3);
	switch (m)
	{
	case'd':
	case'D':
		if (i1 > i2)
		{
			if (i1 > i3)
			{
				printf("�ő�l��%d�ł�\n", i1);
			}
			else
			{
				printf("�ő�l��%d�ł�\n", i3);
			}
		}
		break;
	case's':
	case'S':
		if(i1<i2)
		{
			if (i1 < i3)
			{
				printf("�ő�l��%d�ł�\n", i2);
			}
			else 
			{
				printf("�ő�l��%d�ł�\n", i3);
			}
		}
		break;
	case'g':
	case'G':
		printf("���v��%d�ł�\n", i1 + i2 + i3);
		break;
	case'h':
	case'H':
		printf("���ς�%.2f�ł�\n", (float)(i1 + i2 + i3) / 3);
		break;
	default:
		printf("�����G���[");
	}
}