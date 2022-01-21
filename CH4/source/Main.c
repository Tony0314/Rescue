#include<stdio.h>
#include<stdlib.h>
#define SIZE 12
int main(void)
{
	int a[SIZE] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i;
	int total = 0;
	for (i = 0; i < SIZE; i++)
	{
		total += a[i];
	}
	printf("全部的值相加後為:\n%d\n",total);
	system("pause");
	return 0;
}