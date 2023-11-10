#include<stdio.h>

int main(void)
{
	int a;
	for (a = 0; a < 10000; a = a + 1) 
	{
		if (a % 13 == 0) 
		{
			printf("%d\n", a);
		}
		else if (a % 17 == 0)
		{
			printf("%d\n", a);
		}
	}
	
	return 0;

}
