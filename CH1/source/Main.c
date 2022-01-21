#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a, b, c;
	printf("Enter two numbers:");
	scanf_s("%d%d",&a,&b);
	c = (a + b);
	printf("Sum is %d\n",c);
	system("pause");
	return 0;

}