#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double b;
	double c;

	printf("�����µ��� �Է��Ͻÿ�: ");

	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%f�� ȭ���µ��� %.4f�Դϴ�.\n", a, (9.0 / 5.0) * a + 32.0);
	printf("%f�� ȭ���µ��� %.4f�Դϴ�.\n", b, (9.0 / 5.0) * b + 32.0);
	printf("%f�� ȭ���µ��� %.4f�Դϴ�.\n", c, (9.0 / 5.0) * c + 32.0);
}