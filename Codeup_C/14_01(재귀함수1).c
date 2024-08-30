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

//int f(int n) {
//	if (n == 1)
//		return 1;
//	else {
//		return n + f(n - 1);
//	}
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", f(n));
//	return 0; // 1905 (재귀함수) 1부터 n까지 합 구하기
//}

//int f(int n) {
//	if (n == 1)
//		return 1;
//	else
//		return n * f(n - 1);
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", f(n));
//	return 0; // 1912 (재귀함수) 팩토리얼 계산
//}

//int f(int n) {
//	if (n == 0) return 0; // 첫항을 0
//	else if (n <= 1)return 1; // 두번째 항을 1
//	return f(n - 1) + f(n - 2); // 그 다음 항 값은 앞에 두 항의 합
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", f(n));
//	return 0; // 1915 (재귀함수) 피보나치 수열
//}

//int a[201];
// // 메모이제이션 컴퓨터 프로그램이 동일한 계산을 반복해야 할 때, 이전에 계산한 값을 메모리에 저장함으로써 동일한 계산 반복 수행을 제거
//int f(int n) {
//	if (a[n]!=0) return a[n]; // 이미 해결한 값이면 배열에 있는 값을 리턴한다. if(a[n])
//	else if (n <= 2)return 1;
//	return a[n] = (f(n - 1) + f(n - 2)) % 10009;
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", f(n));
//	return 0; // 1916 (재귀함수) 피보나치 수열 (Large)
//}