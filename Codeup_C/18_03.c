#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//	if (n == 0) printf("0");
//	else {
//		while (n > 0) {
//			printf("%d", n % 10);
//			n = n / 10;
//		}
//	}
//	return 0; // 1714 숫자 거꾸로 출력하기
//}

//int main(void)
//{
//	int n, i, res;
//	char num[201];
//
//	scanf("%d", &n);
//	scanf("%s", num);
//	res = n % 3;
//
//	for (i = 0; i < n; i++) {
//		if (i > 0 && (i % 3 == res)) {
//			printf(",");
//		}
//		printf("%c", num[i]);
//	}
//	return 0; // 2016 천단위 구분기호
//}

//int main(void)
//{
//	long long int a, b;
//	scanf("%lld", &a);
//	scanf("%lld", &b);
//
//	printf("%lld", a + b);
//	return 0; // 3021 큰 수 덧셈
//}