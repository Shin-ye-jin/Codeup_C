#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int i;
//	for (i = 1; i <= 100; i++)
//		printf("%d ", i);
//	return 0; //1251 1부터 100까지 출력하기
//
//}

//int main(void)
//{
//	int i, n;
//	scanf("%d", &n);
//
//	for (i = 1; i < n + 1; i++)
//		printf("%d ", i);
//
//	return 0; // 1252 1부터 n까지 출력하기
//}

//int main(void)
//{
//	int a, b, i;
//	scanf("%d %d", &a, &b);
//
//	if (a > b) {
//		for (i = b; i < a + 1; i++)
//			printf("%d ", i);
//	}
//	else if (b > a) {
//		for (i = a; i < b + 1; i++)
//			printf("%d ", i);
//	}
//	else {
//		for (i = a; i < b + 1; i++)
//			printf("%d ", i);
//	}
//
//	return 0; // 1253 a부터 b까지 출력하기
//}

//int main(void)
//{
//	char a, b, i;
//	scanf("%c %c", &a, &b);
//
//	for (i = a; i <= b; i++)
//		printf("%c ", i);
//	return 0; // 1254 알파벳 출력하기
//}

//int main(void)
//{
//	double a, b, i;
//	scanf("%lf %lf", &a, &b);
//	for (i = a; i <= b; i += 0.01)
//		printf("%.2lf ", i);
//	return 0; // 1255 두 실수 사이 출력하기 - double 사용
//}

//int main(void)
//{
//	int i, a;
//	scanf("%d", &a);
//	for (i = 0; i < a; i++)
//		printf("*");
//	return 0; // 1256 별 출력하기
//}