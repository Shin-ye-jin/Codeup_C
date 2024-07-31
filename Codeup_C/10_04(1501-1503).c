#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int n, i, j,count=1;
//	int num[51][51];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			num[i][j] = count;
//			printf("%d ", num[i][j]);
//			count++;
//		}
//		printf("\n");
//	}
//	return 0; //1501 2차원 배열 채우기 1
//}

//int main(void)
//{
//	int n, i, j, count = 1;
//	int num[51][51];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			num[i][j] = count;
//			count++;
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d ", num[j][i]);
//		}
//		printf("\n");
//	}
//	return 0; // 1502 2차원 배열 채우기 2
//}

//int main(void)
//{
//	int n, i, j, count = 1;
//	int num[51][51];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			num[i][j] = count;
//			count++;
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		if (i % 2 == 0) {
//			for (j = 0; j < n; j++) {
//				printf("%d ", num[i][j]);
//			}
//		}
//		else {
//			for (j = n - 1; j >= 0; j--) {
//				printf("%d ", num[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0; // 1503 지그재그 입력(2차원 배열)
//}