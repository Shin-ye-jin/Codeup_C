#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		for (j = i; j < n-1; j++) {
//			printf(" ");
//		}
//		printf("*");
//
//		for (j = 0; j < i*2; j++) {
//			printf(" ");
//		}
//		printf("*\n");
//	}
//
//	for (i = n; i>0; i--) {
//		for (j = 0; j < (n-i); j++) {
//			printf(" ");
//		}
//		printf("*");
//
//		for (j = 0; j < (i-1) * 2; j++) {
//			printf(" ");
//		}
//		printf("*\n");
//	}
//	return 0; // 1371 마름모 출력하기
//}

//int main(void)
//{
//	int n, i, j, sum=0, s=0;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			s = s + j;
//		}
//		sum = sum + s;
//		s = 0;
//	}
//	printf("%d", sum);
//	return 0; // 1378 수열의 합
//}

//int main(void)
//{
//	int k, i, j;
//	scanf("%d", &k);
//
//	for (i = 1; i <= 6; i++) {
//		for (j = 1; j <= 6; j++) {
//			if ((i + j) == k)
//				printf("%d %d\n", i, j);
//		}
//	}
//	return 0; // 1380 두 주사위의 합
//}

//int main(void)
//{
//	int i, j;
//	
//	for (i = 1; i < 10;i++) {
//		for (j = 2; j < 6; j++) {
//			printf("%d x %d = %2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0; // 1382 GuguClass
//}

//int main(void)
//{
//	int n, m, i, j;
//	scanf("%d %d", &m, &n);
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < m; j++) {
//			if (i == 0 || i == n - 1) {
//				if (j == 0 || j == m - 1) {
//					printf("+");
//				}
//				else {
//					printf("-");
//				}
//			}
//			else {
//				if (j == 0 || j == m - 1) {
//					printf("|");
//				}
//				else {
//					printf(" ");
//				}
//			}
//		}
//		printf("\n");
//	}
//	return 0; // 1677 종이 자르기
//}

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n*2; i+=2) {
//		for (j = i; j < n*2-1; j+=2) {
//			printf(" ");
//		}
//		for (j = 0; j < i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	for (i = 1; i < n; i++) {
//		for (j = 0; j < i; j++) {
//			printf(" ");
//		}
//		for (j = n * 2 - 1; j > i*2; j--) {
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0; // 3122 마름모 출력하기 2
//}