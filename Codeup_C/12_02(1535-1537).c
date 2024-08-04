#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int n, d[110];
//
//int f() {
//	int count = 0, number = 0, i, max;
//
//	max = d[0];
//
//	for (i = 0; i < n; i++) {
//		if (max < d[i]) {
//			max = d[i];
//			count += 1;
//			number = i;
//		}
//	}
//
//	if (count == 0)
//		return 1;
//	else
//		return number + 1;
//}
//
//int main()
//{
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++)
//		scanf("%d", &d[i]);
//
//	printf("%d", f());
//	return 0; // 1535 [기초-함수작성] 함수로 가장 큰 값 위치 리턴하기
//}

//int n;
//long long int d[110];
//
//int f() {
//	int min, i;
//	min = d[1];
//
//	for (i = 1; i <= n; i++) {
//		if (min > d[i]) {
//			min = d[i];
//		}
//	}
//	return min;
//}
//
//int main()
//{
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//		scanf("%lld", &d[i]);
//
//	printf("%lld", f());
//	return 0; // 1536 [기초-함수작성] 함수로 가장 작은 값 리턴하기
//}

//int n;
//
//void f(int n) {
//	if (n == 1)
//		printf("hello");
//	else if (n == 2)
//		printf("world");
//	return;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	f(n);
//	return 0; // 1537 [기초-함수작성] 함수로 hello 또는 world 출력하기
//}