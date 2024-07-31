#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int count = 0, x1, x2, y1, y2;
//	int x, y, i, j;
//	int matrix[101][101];
//
//	for (i = 0; i < 4; i++) {
//		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
//
//		for (x = x1; x < x2; x++) {
//			for (y = y1; y < y2; y++) {
//				matrix[x][y] = 1;
//			}
//		}
//	}
//
//	for (i = 0; i < 100; i++) {
//		for (j = 0; j < 100; j++) {
//			if (matrix[i][j] == 1) {
//				count += 1;
//			}
//		}
//	}
//
//	printf("%d", count);
//
//	return 0; //1507 4개의 직사각형 넓이
//}

//int main(void)
//{
//	int n, num, i, j;
//	int matrix[101][101];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num);
//		matrix[i][0] = num;
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 1; j < i + 1; j++) {
//			matrix[i][j] = matrix[i][j - 1] - matrix[i - 1][j - 1];
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < i + 1; j++) {
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//	return 0; // 1508 나도 IQ 150
//}

//int main(void)
//{
//	int matrix[11][11];
//	int num[11];
//	int count = 0, i, j;
//
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			scanf("%d", &matrix[i][j]);
//		}
//	}
//
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < 10; i++) {
//		count = 0;
//		if (num[i] == 1) {
//			for (j = 9; j >= 0; j--) {
//				if (matrix[j][i] > 0) {
//					count = 1;
//					printf("%d crash\n", i + 1);
//					break;
//				}
//				else if (matrix[j][i] < 0) {
//					count = 1;
//					printf("%d fall\n", i + 1);
//					break;
//				}
//			}
//			if (count == 0) {
//				printf("%d safe\n", i + 1);
//			}
//		}
//	}
//
//	return 0; // 1509 진격 후 결과
//}