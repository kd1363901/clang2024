#include<stdio.h>
main()
{
	int i;
	printf("��������́F");
	scanf("%d", &i);
	if (i >= 1 && i <= 49)
	{
		switch (i/10)
		{
		case 1:
			printf("�P�O�_��ł�");
			break;
		case 2:
			printf("�Q�O�_��ł�");
			break;
		case 3:
			printf("�R�O�_��ł�");
			break;
		case 4:
			printf("�S�O�_��ł�");
			break;
		}
	}
	else
	{
		printf("�G���[�ł�������x��蒼���Ă�������");
	}
}