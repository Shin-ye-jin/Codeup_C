#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int a, b, i, j;
//	char temp;
//	scanf("%d %d %c", &a, &b, &temp);
//
//	if (temp=='L') { // 따옴표 주의
//		for (i = 0; i < a; i++) {
//			for (j = 0; j < i; j++) {
//				printf(" ");
//			}
//			for (j = 0; j < b; j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	else {
//		for (i = 0; i < a; i++) {
//			for (j = a-1; j > i; j--) { // 범위 주의
//				printf(" ");
//			}
//			for (j = 0; j < b; j++) {
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0; // 1368 평행사변형 출력하기 2
//}

//int main(void)
//{
//	int n, k, i, j;
//	scanf("%d %d", &n, &k);
//
//	for (i = 1; i <= n; i++) {
//		if (i == 1 || i == n) {
//			for (j = 0; j < n; j++) {
//				printf("*");
//			}
//		}
//		else{
//			for (j = 0; j < n; j++) {
//				if (j == 0 || j == n-1 || (i + j) % k == 0) {
//					printf("*");
//				}
//				else {
//					printf(" ");
//				}
//			}
//		}
//		printf("\n");
//	}
//
//	return 0; // 1369 빗금 친 사각형 출력하기
//}

//int main(void)
//{
//	int h, r, i, j, k;
//	scanf("%d %d", &h, &r);
//
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < h; j++) {
//			for (k = 0; k < j; k++) {
//				printf(" ");
//			}
//			printf("*\n");
//		}
//		for (j = h - 1; j > 0; j--) {
//			for (k = 1; k < j; k++) {
//				printf(" ");
//			}
//			printf("*\n");
//		}
//	}
//	return 0; // 1370 지그재그 출력하기
//}