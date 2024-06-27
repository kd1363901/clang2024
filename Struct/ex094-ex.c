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
		printf("1:¶‚Ü‚ê”N 2:¶‚Ü‚êŒ 3:¶‚Ü‚ê“ú\n");
		scanf("%d" & j);
		if (j == 1)
		{
			printf("¶‚Ü‚ê”N‚ğ“ü—Í„");
			scanf("%d",&k)
		}
		if (j == 1)
		{
			printf("¶‚Ü‚êŒ‚ğ“ü—Í„");
			scanf("%d", &k)
		}
		if (j == 2)
		{
			printf("¶‚Ü‚ê“ú‚ğ“ü—Í„");
			scanf("%d", &k)
		}
		if (j == 3)
		{
			printf("ŒŒ‰tŒ^‚ğ“ü—Í„");
			scanf("%s", &l)
		}
	for (p = data, i = 0; i < K; i++)
	{
		if (p->date.tuki == 2)
		{
			printf("%s--%d”N %02dŒ %02d“ú¶ ŒŒ‰tŒ^-%sŒ^\n", p->name,
				p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}

	}
}