#include<stdio.h>
main()
{
	char m;
	printf("演算子を入れて：");
	scanf("%c", &m);
	switch (m)
	{
	case'+':
		printf("加算です");
		break;
	case'-':
		printf("減算です");
		break;
	case'*':
		printf("乗算です");
		break;
	case'/':
		printf("除算です");
		break;
	case'%':
		printf("あまりです");
		break;
	default:
		printf("その他です");
	}
}