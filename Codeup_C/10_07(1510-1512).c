#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int n, i, j, row = 0, column, num = 1;
//	int matrix[101][101];
//
//	scanf("%d", &n);
//
//	column = n / 2;
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			matrix[row][column] = num;
//			if (num % n == 0) {
//				row++;
//			}
//			else {
//				row -= 1;
//				column += 1;
//			}
//
//			if (row == -1) {
//				row = n - 1;
//			}
//			if (column == n) {
//				column = 0;
//			}
//			num++;
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0; //1510 홀수 마방진
//}

//int main(void)
//{
//	int n, i, j, num = 1, result = 0;
//	int matrix[101][101];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			matrix[i][j] = num;
//			num++;
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		if (i == 0 || i == (n - 1)) {
//			for (j = 0; j < n; j++) {
//				result += matrix[i][j];
//			}
//		}
//		else {
//			result = result + matrix[i][0] + matrix[i][n - 1];
//		}
//	}
//
//	printf("%d", result);
//
//	return 0; // 1511 테두리의 합
//}

//int main(void)
//{
//	int n, i, j, x, y, num = 1;
//	int matrix[101][101];
//
//	scanf("%d", &n);
//	scanf("%d %d", &x, &y);
//
//	x = x - 1, y = y - 1;
//
//	for (i = 0; i < n; i++) {
//		if (i <= y) {
//			matrix[x][i] = num + y - i;
//		}
//		else {
//			matrix[x][i] = num + i - y;
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = x + 1; j < n; j++) {
//			matrix[j][i] = matrix[j - 1][i] + 1;
//		}
//		for (j = x - 1; j >= 0; j--) {
//			matrix[j][i] = matrix[j + 1][i] + 1;
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d ", matrix[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0; // 1512 숫자 등고선
//}