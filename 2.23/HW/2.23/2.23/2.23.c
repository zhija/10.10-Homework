#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	while (1)
	{
		int a, b, c, max, min;
		printf("Enter three numbers and I wii tell the greatest and smallest number:\n");
		scanf_s("%d %d %d", &a, &b, &c);
		max = a;
		min = a;
		if (b > max)
		{
			max = b;
		}
		if (c > max)
		{
			max = c;
		}
		if (b < min)
		{
			min = b;
		}
		if (c < min)
		{
			min = c;
		}
		printf("the greatest number is %d the smallest number is %d", max, min);
	}
	system("pause");
	return 0;
}