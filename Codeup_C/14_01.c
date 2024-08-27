#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void f(int n) {
//	if (n == 0)
//		return;
//	else { 
//		f(n - 1); // 함수 먼저 실행 top-down 방식
//		printf("%d\n", n);
//	}
//}
//
//int main(void)
//{
//	int i, n;
//	scanf("%d", &n);
//	f(n);
//	return 0; // 1901 (재귀 함수) 1부터 n까지 출력하기
//}

//void f(int n)
//{
//	if (n == 0)
//		return;
//	else {
//		printf("%d\n", n);
//		f(n - 1);
//	}
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	f(n);
//	return 0; // 1902 (재귀 함수) 1부터 n까지 역순으로 출력하기
//}

//void f(int a, int b)
//{
//	if (a > b)
//		return;
//	else {
//		if (a % 2 == 1) {
//			printf("%d ", a);
//			f(a + 1, b);
//		}
//		else
//			f(a + 1, b);
//	}
//}
//
//int main(void)
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	f(a, b);
//	return 0; // 1904 (재귀함수) 두 수 사이의 홀수 출력하기
//}