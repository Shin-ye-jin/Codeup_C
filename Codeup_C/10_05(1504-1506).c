#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int n, i, j, count = 1;
//	int num[101][101];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		if (i % 2 == 0) {
//			for (j = 0; j < n; j++) {
//				num[i][j] = count;
//				count++;
//			}
//		}
//		else {
//			for (j = n - 1; j >= 0; j--) {
//				num[i][j] = count;
//				count++;
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d ", num[j][i]);
//		}
//		printf("\n");
//	}
//	return 0; // 1504 지그재그 배열 2
//}

//int main(void)
//{
//	int n, row = 0, column = -1, count = 0, row_size, column_size, step = 1;
//	int i, j;
//	int matrix[51][51];
//	
//	scanf("%d", &n);
//
//	row_size = n, column_size = n;
//
//	while (row_size && column_size) {
//		for (i = 0; i < column_size; i++) {
//			count++;
//			column += step;
//			matrix[row][column] = count;
//		}
//
//		row_size -= 1;
//
//		for (i = 0; i < row_size; i++) {
//			count++;
//			row += step;
//			matrix[row][column] = count;
//		}
//
//		column_size -= 1;
//		step = -step;
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0; // 1505 2차원 배열 채우기 3(달팽이 배열)
//}

//int main(void)
//{
//	int n, row = 0, column = -1, count = 0, row_size, column_size, step = 1;
//	int i, j;
//	int matrix[51][51];
//	
//	scanf("%d", &n);
//
//	row_size = n, column_size = n;
//
//	while (row_size && column_size) {
//		for (i = 0; i < column_size; i++) {
//			count++;
//			column += step;
//			matrix[row][column] = count;
//		}
//
//		row_size -= 1;
//
//		for (i = 0; i < row_size; i++) {
//			count++;
//			row += step;
//			matrix[row][column] = count;
//		}
//
//		column_size -= 1;
//		step = -step;
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d ", matrix[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0; // 1506 2차원 배열 채우기 4(역달팽이 배열)
//}