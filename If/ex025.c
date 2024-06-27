#include<stdio.h>
main()
{
	char c;
	printf("文字を入力：");
	scanf("%c", &c);
	if ((c >= 'A'&&c <= 'Z')||(c>='a'&&c<='z')){
		printf("アルファベット\n");
	}
	else {
		if (c >= '0' && c <= '9') {
			printf("数字\n");
		}
		else {
			printf("その他小文字です\n");
		}
	}
}