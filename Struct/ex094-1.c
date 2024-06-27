#include<stdio.h>
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
							{ "yuta", 1997, 12, 31, "AB"},
							{ "kanami", 1970, 2, 17, "A" } };
	struct profile* p;
	int i;
	for (p = data, i = 0; i < K; i++, p++)
	{
		if (p->date.tuki == 2)
		{
			printf("%s--%d”N %02dŒŽ %02d“ú¶ ŒŒ‰tŒ^-%sŒ^\n", p->name,
				p->date.nen, p->date.tuki, p->date.hi, p->blood);
		}

	}
}