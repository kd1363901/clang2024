#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k,r;
	char l, w;
	printf("�ǂ�����H\n");
	printf("1 �U��\n");
	printf("2 �h��\n");
	printf("3 �A�C�e��\n");
	scanf("%c", &l);
	
	
	switch(l)
	{
	case'1':
		
		srand(time(0));
		k = rand() % 100 + 1;
		if (k <= 30)
		{
			printf("%d ��������̂��������I\n", k);
			break;
		}
		else {
			printf("%d �ʏ�U��\n", k);
			break;
		}
	case'2':
		srand(time(0));
		r = rand() % 100 + 1;
		if (r <= 75)
		{
			printf("%d �h�䐬���I\n", r); 
			break;
		}
		else {
			printf("%d ���s�I�I\n", r);
			break;
		}
	case'3':
		printf("1 ��\n2 �|�[�V����\n3 �G���N�T�[\n");
		scanf("%c", &w);
		switch (w)
		{
		case'1':
			printf("20�񕜂���\n");
			break;
		case'2':
			printf("50�񕜂���\n");
			break;
		case'3':
			printf("���S�ɉ񕜂���\n");
			break;
		}
	}
}