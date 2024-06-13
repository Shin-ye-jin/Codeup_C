#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	double a, b, weight, real;
//	scanf_s("%lf %lf", &a, &b);
//
//	weight = (a - 100) * 0.9;
//	real = (b - weight) * 100 / weight;
//
//	if (real <= 10)
//		printf("정상");
//	else if (real <= 20)
//		printf("과체중");
//	else
//		printf("비만");
//
//	return 0; // 1228 비만도 측정 1
//}

//int main(void)
//{
//	double a, b, weight,w, real;
//	scanf_s("%lf %lf", &a, &b);
//
//	if (a < 150)
//		w = a - 100;
//	else if (a < 160)
//		w = (a - 150) / 2 + 50;
//	else
//		w = (a - 100) * 0.9;
//
//	real = (b - w) * 100 / w;
//
//	if (real <= 10)
//		printf("정상");
//	else if (real <= 20)
//		printf("과체중");
//	else
//		printf("비만");
//
//	return 0; // 1229 비만도 측정 2
//}

//int main(void)
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	if (a <= 170)
//		printf("CRASH %d", a);
//	else if (a > 170 && b <= 170)
//		printf("CRASH %d", b);
//	else if (a > 170 && b > 170 && c <= 170)
//		printf("CRASH %d", c);
//	else
//		printf("PASS");
//
//	return 0; // 1230 터널 통과하기 2
//}

//int main(void)
//{
//	int a, b;
//	char n;
//	scanf("%d%c%d", &a,&n, &b);
//
//	if (n == '+')
//		printf("%d", a + b);
//	else if (n == '-')
//		printf("%d", a - b);
//	else if (n == '*')
//		printf("%d", a * b);
//	else if (n == '/')
//		printf("%.2f", (float)a /(float) b);
//
//	return 0; // 1231 계산기1
//}