#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//double x;
//
//long long int f(double x) {
//	long long int t = (long long int)x;
//
//	if (t < x)
//		return x + 1;
//	else
//		return x;
//}
//
//int main()
//{
//	scanf("%lf", &x);
//	printf("%lld\n", f(x));
//	return 0; // 1553 [기초-함수작성] 함수로 정수 올림 한 값 리턴하기
//}

//double x;
//
//long long int f(double x) {
//	long long int t = (long long int)x;
//
//	if (t > x)
//		return x - 1; // 내림!
//	else
//		return x;
//}
//
//int main()
//{
//	scanf("%lf", &x);
//	printf("%lld\n", f(x));
//	return 0; // 1554 [기초-함수작성] 함수로 정수 내림 한 값 리턴하기
//}

//int n;
//
//long long int f(int x) {
//	long long int i, sum = 0;
//
//	for (i = 1; i <= x; i++) {
//		sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	printf("%lld\n", f(n));
//	return 0; // 1555 [기초-함수작성] 함수로 n까지의 합 리턴하기
//}

//int n;
//
//long long int f(int n) {
//	long long int i, result = 1;
//
//	for (i = n; i >= 1; i--) {
//		result *= i;
//	}
//
//	return result;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	printf("%lld\n", f(n));
//	return 0; // 1556 [기초-함수작성] 함수로 n! 리턴하기
//}

//int n;
//
//int f(int n) {
//	int i, count = 0;
//	
//	for (i = 1; i <= n; i++) {
//		if (n % i == 0) {
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	printf("%d\n", f(n));
//	return 0; // 1557 [기초-함수작성] 함수로 n의 약수의 개수 리턴하기
//}

//long long int n;
//
//long long int f(long long int n) {
//	long long int i,number=0;
//
//	while (n >9) { // 10이하인 것은 리턴
//		number = n % 10;
//		printf("%d", number);
//		n = n / 10;
//	}
//	return n; 
//}
//
//int main()
//{
//	scanf("%lld", &n);
//	printf("%lld\n", f(n));
//	return 0; // 1558 [기초-함수작성] 함수로 정수 뒤집어 리턴하기
//}