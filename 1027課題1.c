#include<stdio.h>

int main(void)
{
	int a, result;

	printf("Please Enter Number: ");
	scanf_s("%d", &a);
	result = a * a * a;
	printf("%d^3=%d\n",a,result);
	return 0;

}