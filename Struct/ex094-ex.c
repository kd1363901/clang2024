#include<stdio.h>
#include<string.h>
#define K 5
struct day
{
	int nen;
	int tuki;
	int hi;
};
struct profile
{
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile data[K]= { { "akari", 2000, 1, 1, "A" },
							{ "rina", 2002, 2, 20, "AB" },
							{ "kokoro", 1998, 5, 1, "O" },
							{ "yuta", 1997, 12, 31, "B"},
							{ "kanami", 1970, 2, 17, "A" } };
	struct profile* p;
	int i,j,l,k;
		printf("1:���܂�N 2:���܂ꌎ 3:���܂��\n");
		scanf("%d" & j);
		if (j == 1)
		{
			printf("���܂�N����́�");
			scanf("%d",&k)
		}
		if (j == 1)
		{
			printf("���܂ꌎ����́�");
			scanf("%d", &k)
		}
		if (j == 2)
		{
			printf("���܂������́�");
			scanf("%d", &k)
		}
		if (j == 3)
		{
			printf("���t�^����́�");
			scanf("%s", &l)
		}
	for (p = data, i = 0; i < K; i++)
	{
		if (p->date.tuki == 2)
		{
			printf("%s--%d�N %02d�� %02d���� ���t�^-%s�^\n", p->name,
				p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}

	}
}