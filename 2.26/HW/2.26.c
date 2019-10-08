#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("Enter two integers and I will tell you wheather the first is multiple of second\n");
	scanf_s("%d%d", &a, &b);
	if (b % a == 0)
		printf("the first is multiple of second");
	else
		printf("the first is not multiple of second");
	system("pause");
	return 0;
}