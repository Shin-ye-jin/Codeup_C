#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int n, k, d[1010];
//
//int upper_bound(int k)
//{
//	int i;
//
//	for (i = 1; i <= n; i++) {
//		if (d[i] > k)
//			return i;
//	}
//	return n + 1;
//}
//
//int main()
//{
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &d[i]);
//
//	scanf("%d", &k);
//
//	printf("%d\n", upper_bound(k));
//
//	return 0; // 1571 [기초-함수작성] 함수로 Upper Bound 위치 리턴하기
//}


//void f() {
//	printf("Hello?");
//}
//
//main()
//{
//	f();
//	// 1576 (함수작성) void형 함수
//}

//int myabs(int a) {
//	if (a < 0)
//		return a * (-1);
//	else
//		return a;
//}
//
//main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", myabs(a));
//	// 1577 (함수 작성) 절댓값 함수 1
//}

//int mymax(int a, int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;
//}
//
//main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", mymax(a, b));
//	// 1578 (함수 작성) 최댓값 함수
//}

//int mymin(int a, int b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//}
//
//main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", mymin(a, b));
//	// 1579 (함수 작성) 최솟값 함수
//}

//float circle(int r)
//{
//	return r * r * 3.14;
//}
//
//main()
//{
//	int r;
//	scanf("%d", &r);
//	printf("%.2f", circle(r));
//	// 1580 (함수 작성) 원의 넓이
//}