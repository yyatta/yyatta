#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double a;
	double b;
	double c;

	printf("섭씨온도를 입력하시오: ");

	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%f의 화씨온도는 %.4f입니다.\n", a, (9.0 / 5.0) * a + 32.0);
	printf("%f의 화씨온도는 %.4f입니다.\n", b, (9.0 / 5.0) * b + 32.0);
	printf("%f의 화씨온도는 %.4f입니다.\n", c, (9.0 / 5.0) * c + 32.0);
}