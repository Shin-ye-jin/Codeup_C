#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//    int z, n, m, i, j, count = 0, row = 0, column = -1, row_size, column_size, step = 1;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//    row_size = n, column_size = m, count = n * m;
//
//    while (row_size && column_size) {
//        for (z = 0; z < column_size; z++) {
//            column += step;
//            matrix[row][column] = count;
//            count -= 1;
//        }
//
//        row_size -= 1;
//
//        for (z = 0; z < row_size; z++) {
//            row += step;
//            matrix[row][column] = count;
//            count -= 1;
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
//    return 0; // 1485 [기초-배열연습] 2차원 배열 달팽이 채우기 4-2
//}

//int main() {
//    int i, j, z, n, m, column, row = -1, count = 0, row_size, column_size, step = 1;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//    column = m - 1;
//    row_size = n, column_size = m;
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
//    return 0; // 1486 [기초-배열연습] 2차원 달팽이 채우기 4-3
//}

//int main() {
//    int i, j, z, n, m, column, row = -1, count = 0, row_size, column_size, step = 1;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//    column = m - 1, count = n * m;
//    row_size = n, column_size = m;
//
//    while (row_size && column_size) {
//        for (z = 0; z < row_size; z++) {
//            row += step;
//            matrix[row][column] = count;
//            count--;
//        }
//
//        step = -step;
//        column_size -= 1;
//
//        for (z = 0; z < column_size; z++) {
//            column += step;
//            matrix[row][column] = count;
//            count--;
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
//    return 0; // 1487 [기초-배열연습] 2차원 배열 달팽이 채우기 4-4
//}

