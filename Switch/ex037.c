#include<stdio.h>
main()
{
	char m;
	printf("���Z�q�����āF");
	scanf("%c", &m);
	switch (m)
	{
	case'+':
		printf("���Z�ł�");
		break;
	case'-':
		printf("���Z�ł�");
		break;
	case'*':
		printf("��Z�ł�");
		break;
	case'/':
		printf("���Z�ł�");
		break;
	case'%':
		printf("���܂�ł�");
		break;
	default:
		printf("���̑��ł�");
	}
}