#include<stdio.h>

int main(void)
{
	int a, result;

	printf("Please Enter Number: ");
	scanf_s("%d", &a);

	if (a % 2 == 0) {
		printf("%d�͋����ł�", a);
	}
	else {
		printf("%d�͊�ł�", a);
	}

	return 0;
}