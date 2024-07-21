#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//    int i, j, z, n, m, column = 0, row, count = 0, row_size, column_size, step = -1;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//
//    row = n, row_size = n, column_size = m, count = n * m;
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
//    return 0; // 1491 [기초-배열연습] 2차원 배열 달팽이 채우기 4-8
//}

//int main() {
//    int n, i, sum = 0;
//    int num[100];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf("%d", &num[i]);
//        sum += num[i];
//        printf("%d ", sum);
//    }
//    return 0; // 1492 [기초-배열연습] 1차원 누적 합 배열 만들기 5-1
//}

//int main() {
//    int n, m, i, j, sum = 0, nsum = 0, num;
//    int arr[100][100];
//    int arr2[100][100];
//
//    scanf("%d %d", &n, &m);
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            scanf("%d", &num);
//            arr[i][j] = num;
//            sum += arr[i][j];
//            arr2[i][j] = sum;
//        }
//        sum = 0;
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            if (i == 0) {
//                printf("%d ", arr2[i][j]);
//            }
//            else {
//                sum = arr2[i][j] + arr2[i - 1][j];
//                arr2[i][j] = sum;
//                printf("%d ", sum);
//            }
//        }
//        printf("\n");
//    }
//    return 0; // 1493 [기초-배열연습] 2차원 누적 합 배열 만들기 5-2
//}
