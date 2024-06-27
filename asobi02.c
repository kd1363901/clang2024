#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k,r;
	char l, w;
	printf("どうする？\n");
	printf("1 攻撃\n");
	printf("2 防御\n");
	printf("3 アイテム\n");
	scanf("%c", &l);
	
	
	switch(l)
	{
	case'1':
		
		srand(time(0));
		k = rand() % 100 + 1;
		if (k <= 30)
		{
			printf("%d かいしんのいちげき！\n", k);
			break;
		}
		else {
			printf("%d 通常攻撃\n", k);
			break;
		}
	case'2':
		srand(time(0));
		r = rand() % 100 + 1;
		if (r <= 75)
		{
			printf("%d 防御成功！\n", r); 
			break;
		}
		else {
			printf("%d 失敗！！\n", r);
			break;
		}
	case'3':
		printf("1 薬草\n2 ポーション\n3 エリクサー\n");
		scanf("%c", &w);
		switch (w)
		{
		case'1':
			printf("20回復した\n");
			break;
		case'2':
			printf("50回復した\n");
			break;
		case'3':
			printf("完全に回復した\n");
			break;
		}
	}
}