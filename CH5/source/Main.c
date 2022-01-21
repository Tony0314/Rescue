#include<stdio.h>
#include<stdlib.h>
int callByvalue(int y);
int main(void)
{
	int number = 4;
	printf("It has a nummber:%d\n", number);
	number = callByvalue(number);
	printf("The new number is:%d\n", number);
	system("pause");
	return 0;
}

int callByvalue(int y)
{
	return y * y*y;
}