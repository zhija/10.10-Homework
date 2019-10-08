#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("Enter the number I will tell you the number is odd or even\n");
	scanf_s("%d", &a);
	if ((a % 2) == 0)
		printf("the number %d is even\n", a);
	else
		printf("the nmmber %d is odd\n", a);

	system("pause");
	return 0;
}