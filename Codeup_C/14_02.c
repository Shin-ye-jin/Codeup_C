#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void f(int n)
//{
//	if (n / 2 != 0)
//		f(n / 2);
//	printf("%d", n % 2);
//
//}
//
//int main(void)
//{
//	int n;
//
//	scanf("%d", &n);
//	f(n);
//
//	return 0; // 1920 (재귀함수) 2진수 변환
//}

//void f(int n)
//{
//	if (n == 1)
//		return 1;
//
//	if (n % 2 == 1) {
//		printf("%d\n", 3 * n + 1);
//		f(3 * n + 1);
//	}
//	else if (n % 2 == 0) {
//		printf("%d\n", n / 2);
//		f(n / 2);
//	}
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", n);
//	f(n);
//
//	return 0; // 1928 (재귀함수) 우박수 (3n+1) (basic)
//}

//void f(int n)
//{
//	if (n == 1) return 1;
//
//	if (n % 2 == 1) {
//		f(3 * n + 1);
//		printf("%d\n", 3 * n + 1);
//	}
//	else if (n % 2 == 0) {
//		f(n / 2);
//		printf("%d\n", n / 2);
//	}
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	f(n);
//	printf("%d\n", n);
//	return 0; // 1929 (재귀함수) 우박수 (3n+1) (reverse)
//}