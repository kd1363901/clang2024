#include<stdio.h>
main()
{
	char c;
	printf("��������́F");
	scanf("%c", &c);
	if ((c >= 'A'&&c <= 'Z')||(c>='a'&&c<='z')){
		printf("�A���t�@�x�b�g\n");
	}
	else {
		if (c >= '0' && c <= '9') {
			printf("����\n");
		}
		else {
			printf("���̑��������ł�\n");
		}
	}
}