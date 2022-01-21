#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b,max;
	printf("Enter two numbers:");
	scanf_s("%d%d", &a, &b);
	max = (a > b) ? a : b;
	printf("兩者之中最大的數字為:\n%d\n", max);
	system("pause");
	return 0;
}