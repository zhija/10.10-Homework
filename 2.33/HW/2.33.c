#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int d,e;
	float a, b, c,total;
	total = 0;
	printf("�п�J�H�U��T�H�K�p��@�Ѷ}���u�@����O\n");
	printf("�@�Ѫ��`���{��(km):");
	scanf_s("%f",&a);
	printf("�T�o�@���ɦh�ֿ�(��):");
	scanf_s("%f",&b);
	printf("�����@���ɯ��p�h�֤���:");
	scanf_s("%f",&c);
	printf("�@�Ѫ������O(��):");
	scanf_s("%d",&d);
	printf("�@�Ѫ��q��O(�L���O)(��):");
	scanf_s("%d",&e);
	total = (a / c) * b + d + e;
	printf("�A�@�Ѷ}���u�@����O�O:%.1f��\n", total);
	system("pause");
	return 0;
}