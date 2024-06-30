#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		if (i == 0 || i == n - 1) {
//			for (j = 0; j < n; j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//		else{
//			for (j = 0; j < n; j++) {
//				if (j == 0 || j == n - 1 || j == i || j == n-1 - i) {
//					printf("*");
//				}
//				else {
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0; // 1365 사각형 출력하기 3
//}

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		if (i == 0 || i == n - 1 || i==(n-1)/2) {
//			for (j = 0; j < n; j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//		else{
//			for (j = 0; j < n; j++) {
//				if (j == 0 || j == n - 1 || j == i || j == n-1 - i || j==(n-1)/2) {
//					printf("*");
//				}
//				else {
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0; // 1366 사각형 출력하기 4
//}

//int main(void)
//{
//	int n, i, j;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		for (j = i; j < n - 1; j++) {
//			printf(" ");
//		}
//		for (j = 0; j < n; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0; // 1367 평행사변형 출력하기 1
//}