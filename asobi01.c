#include<stdio.h>
main()
{
	char l;
	printf("�����ɂ��������H\n");
	printf("1\n");
	printf("2\n");
	printf("3\n");
	printf("�������A�A�A:");
	scanf("%c", &l);
	switch (l)
	{
	case'1':
		printf("����Ȃ炱�����܂�������");
		break;
	case'2':
		printf("����Ȃ炱�����E�ɋȂ����Ă�����");
		break;
	case'3':
		printf("����Ȃ�܂��߂��Ă������獶��");
		break;
	}
	
}