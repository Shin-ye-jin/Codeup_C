#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int a, b, i, j;
//	scanf("%d %d", &a, &b);
//
//	for (i = a; i <= b; i++) {
//		for (j = 1; j <= 9; j++) {
//			printf("%d*%d=%d\n", i, j, i * j);
//		}
//	}
//	return 0; //1351 구구단 출력하기 2
//}

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;// 1352 사각형 출력하기 1
//}

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		for (j = 0; j < i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0; // 1353 삼각형 출력하기 1
//}

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = n; i > 0; i--) {
//		for (j = 0; j < i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0; // 1354 삼각형 출력하기 2
//}

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = n; i > 0; i--) {
//		for (j = 0; j < n - i; j++) {
//			printf(" ");
//		}
//		for (j = 0; j < i; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0; // 1355 삼각형 출력하기 3
//}

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = 1; i <= n; i++) {
//		if (i == 1 || i == n) {
//			for (j = 0; j < n; j++) {
//				printf("*");
//			}
//		}
//		else {
//			for (j = 1; j <= n; j++) {
//				if (j == 1 || j == n) {
//					printf("*");
//				}
//				else {
//					printf(" ");
//				}
//			}
//		}
//		printf("\n");
//	}
//	return 0; // 1356 사각형 출력하기 2
//}