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
//		printf("����");
//	else if (real <= 20)
//		printf("��ü��");
//	else
//		printf("��");
//
//	return 0; // 1228 �񸸵� ���� 1
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
//		printf("����");
//	else if (real <= 20)
//		printf("��ü��");
//	else
//		printf("��");
//
//	return 0; // 1229 �񸸵� ���� 2
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
//	return 0; // 1230 �ͳ� ����ϱ� 2
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
//	return 0; // 1231 ����1
//}