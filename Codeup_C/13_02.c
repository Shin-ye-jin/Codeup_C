#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void myswap(int* a, int* b)
//{
//	int temp = 0;
//
//	if (*a > *b)
//	{
//		temp = *a;
//		*a = *b;
//		*b = temp;
//	}
//}
//
//main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	myswap(&a, &b);
//	printf("%d %d", a, b);
//	// 1581 : (함수 작성 + 포인터) swap 함수 만들기 (Call by Reference)
//}

//double f(double a)
//{
//	if (a < 0)
//		return a * (-1);
//	else
//		return a;
//}
//
//int main(void)
//{
//	double n;
//	scanf("%lf", &n);
//	printf("%.10g", f(n)); // %g 0이 출력되지 않음
//
//	return 0; // 1602 절대값 함수
//}