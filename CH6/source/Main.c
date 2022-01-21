#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	struct man
	{
		char name[8];
		int gender;
		int old;
	}p;
	printf("Please type your name:");
	scanf("%s", &p.name);
	printf("Please type your gender(If you are women type 0 else type 1):");
	scanf("%d", &p.gender);
	printf("Please type hoe old are you:");
	scanf("%d", &p.old);

	printf("\nHi! %s.", p.name);
	if (p.gender == 0)
	{
		printf("You are a %d old woman.\n", p.old);
	}
	else
	{
		printf("You are a %d old man.\n", p.old);
	}
	system("pause");
}