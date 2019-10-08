#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c;
	printf("Enter the weight(kg),height(cm) I will tell you the BMI\n");
	printf("Enter the weight:");
	scanf_s("%f\n", &a);
	printf("Enter the height:");
	scanf_s("%f\n", &b);
	b = b / 100;
	c = a / (b * b);
	printf("your BMI is %.1f\n", c);
	if (c < 18.5)
		printf("your are underweight");
	else if (c >= 18.5 && c < 24.9)
		printf("your are normal");
	else if (25 <= c && c < 29.9)
		printf("your are overweight");
	else
		printf("your are obese");


	system("pause");
	return 0;
}