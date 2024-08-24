#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//int num[6000];
//
//void f(int n) {
//	int tmp = n;
//	while (n != 0) {
//		tmp = tmp + n % 10;
//		n = n / 10;
//	}
//	num[tmp]++;
//}
//
//int main(void)
//{
//	int a, b, i, sum = 0;
//
//	scanf("%d %d", &a, &b);
//
//	for (i = 1; i <= b; i++) {
//		f(i);
//	}
//
//	for (i = a; i <= b; i++) {
//		if (num[i] == 0)
//			sum += i;
//	}
//	
//	printf("%d", sum);
//	return 0; // 1615 ¼¿ÇÁ ³Ñ¹ö(Self-Number)
//}

//int f(int n) {
//	if (n / 10 == 0) {
//		return n;
//	}
//	else {
//		return f(n / 10) + f(n % 10);
//	}
//}
//
//int main(void)
//{
//	int sum = 0, n;
//	scanf("%d", &n);
//
//	sum = f(n);
//
//	while (sum >= 10) {
//		sum = f(sum);
//	}
//
//	printf("%d", sum);
//
//	return 0; // 1620 ÀÚ¸´¼öÀÇ ÇÕ
//}