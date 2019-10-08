#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int d,e;
	float a, b, c,total;
	total = 0;
	printf("請輸入以下資訊以便計算一天開車工作的花費\n");
	printf("一天的總里程數(km):");
	scanf_s("%f",&a);
	printf("汽油一公升多少錢(元):");
	scanf_s("%f",&b);
	printf("平均一公升能行駛多少公里:");
	scanf_s("%f",&c);
	printf("一天的停車費(元):");
	scanf_s("%d",&d);
	printf("一天的通行費(過路費)(元):");
	scanf_s("%d",&e);
	total = (a / c) * b + d + e;
	printf("你一天開車工作的花費是:%.1f元\n", total);
	system("pause");
	return 0;
}