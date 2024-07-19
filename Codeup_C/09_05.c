#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//    int n, m, k, i, j, count = 0;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//
//    for (i = 0; i < n + m - 1; i++) {
//        for (j = 0; j < n; j++) {
//            for (k = 0; k < m; k++) {
//                if (j + k == i) {
//                    count++;
//                    matrix[j][k] = count;
//                }
//            }
//        }
//    }
//
//    for (i = n - 1; i >= 0; i--) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0; // 1482 [기초-배열연습] 2차원 배열 빗금 채우기 3-7
//}

//int main() {
//    int n, m, k, i, j, count = 0;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//
//    for (i = 0; i < n + m - 1; i++) {
//        for (j = 0; j < m; j++) {
//            for (k = 0; k < n; k++) {
//                if (j + k == i) {
//                    count++;
//                    matrix[k][j] = count;
//                }
//            }
//        }
//    }
//
//    for (i = n - 1; i >= 0; i--) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0; // 1483 [기초-배열연습] 2차원 배열 빗금 채우기 3-8
//}

//int main() {
//    int n, m, i, j, count = 0, row = 0, column = -1, step = 1;
//    int row_size, column_size;
//    int  z;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//    row_size = n, column_size = m;
//
//    while (row_size && column_size) {
//        for (z = 0; z < column_size; z++) {
//            count++;
//            column += step;
//            matrix[row][column] = count;
//        }
//
//        row_size -= 1;
//
//
//        for (z = 0; z < row_size; z++) {
//            count++;
//            row += step;
//            matrix[row][column] = count;
//        }
//
//        column_size -= 1;
//        step = -step;
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0; // 1484 [기초-배열연습] 2차원 배열 달팽기 채우기 4-1
//}

