#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int gcd(int p, int q) { if (p == 0)return q; return gcd(q % p, p); }
//
//long long int lcm(long long int a, long long int b)
//{
//	if (a < b) {
//		return a / gcd(b, a) * b; // 여러번 해보기!
//	}
//	else {
//		return b / gcd(a, b) * a;
//	}
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%lld\n", lcm(a, b));
//	return 0; // 1565 [기초-함수작성] 함수로 최소공배수 리턴하기
//}

//int a, n;
//
//long long int pow(long long int a, long long int b)
//{
//	long long int result = 1, i;
//
//	if (a == 1) // 시간초과로 인해 처리
//		return 1;
//	else {
//		for (i = 0; i < b; i++) {
//			result *= a;
//		}
//	}
//	return result;
//}
//
//int main()
//{
//	scanf("%d%d", &a, &n);
//	printf("%lld\n", pow(a, n));
//	return 0; // 1566 [기초-함수작성] 함수로 거듭제곱 리턴하기
//}

//int n, a, b, d[1010];
//
//long long int subsetsum(long long int a, long long int b)
//{
//	long long int i, result = 0;
//
//	for (i = a; i <= b; i++) {
//		result += d[i];
//	}
//	return result;
//}
//
//int main()
//{
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &d[i]);
//
//	scanf("%d%d", &a, &b);
//
//	printf("%lld\n", subsetsum(a, b));
//	return 0; // 1567 [기초-함수작성] 함수로 배열의 부분합 리턴하기
//}