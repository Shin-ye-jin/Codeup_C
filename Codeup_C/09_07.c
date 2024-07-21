#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//    int i, j, z, n, m, column, row, count = 0, row_size, column_size, step = -1;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//
//    row = n - 1, column = m, row_size = n, column_size = m;
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
//        for (z = 0; z < row_size; z++) {
//            count++;
//            row += step;
//            matrix[row][column] = count;
//        }
//
//        step = -step;
//        column_size -= 1;
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0; // 1488 [기초-배열연습] 2차원 배열 달팽이 채우기 4-5
//}

//int main() {
//    int i, j, z, n, m, column, row, count = 0, row_size, column_size, step = -1;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//
//    row = n - 1, column = m, row_size = n, column_size = m, count = n * m;
//
//    while (row_size && column_size) {
//        for (z = 0; z < column_size; z++) {
//            column += step;
//            matrix[row][column] = count;
//            count--;
//        }
//
//        row_size -= 1;
//
//        for (z = 0; z < row_size; z++) {
//            row += step;
//            matrix[row][column] = count;
//            count--;
//        }
//
//        step = -step;
//        column_size -= 1;
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0; // 1489 [기초-배열연습] 2차원 배열 달팽이 채우기 4-6
//}

//int main() {
//    int i, j, z, n, m, column = 0, row, count = 0, row_size, column_size, step = -1;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//
//    row = n, row_size = n, column_size = m;
//
//    while (row_size && column_size) {
//        for (z = 0; z < row_size; z++) {
//            count++;
//            row += step;
//            matrix[row][column] = count;
//        }
//
//        step = -step;
//        column_size -= 1;
//
//        for (z = 0; z < column_size; z++) {
//            count++;
//            column += step;
//            matrix[row][column] = count;
//        }
//
//        row_size -= 1;
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0; // 1490 [기초-배열연습] 2차원 배열 달팽이 채우기 4-7
//}
