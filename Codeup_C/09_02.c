#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//    int n, m, i, j, count = 0;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//
//    for (i = 0; i < n; i++) {
//        if (i % 2 == 0) {
//            for (j = 0; j < m; j++) {
//                count++;
//                matrix[i][j] = count;
//            }
//        }
//        else {
//            for (j = m - 1; j >= 0; j--) {
//                count++;
//                matrix[i][j] = count;
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
//    return 0; // 1473 [����-�迭����] 2���� �迭 ������� ä��� 2-6
//}

//int main() {
//    int n, m, i, j, count = 0;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//
//    for (i = 0; i < m; i++) {
//        if (i % 2 == 0) {
//            for (j = 0; j < n; j++) {
//                count++;
//                matrix[i][j] = count;
//            }
//        }
//        else {
//            for (j = n - 1; j >= 0; j--) {
//                count++;
//                matrix[i][j] = count;
//            }
//        }
//    }
//
//    for (i = n - 1; i >= 0; i--) {
//        for (j = m - 1; j >= 0; j--) {
//            printf("%d ", matrix[j][i]);
//        }
//        printf("\n");
//    }
//    return 0; // 1474 [����-�迭����] 2���� �迭 ������� ä��� 2-7
//}

//int main() {
//    int n, m, i, j, count = 0;
//    int matrix[100][100];
//
//    scanf("%d %d", &n, &m);
//
//    for (i = 0; i < m; i++) {
//        if (i % 2 == 1) {
//            for (j = 0; j < n; j++) {
//                count++;
//                matrix[i][j] = count;
//            }
//        }
//        else {
//            for (j = n - 1; j >= 0; j--) {
//                count++;
//                matrix[i][j] = count;
//            }
//        }
//    }
//
//    for (i = n - 1; i >= 0; i--) {
//        for (j = m - 1; j >= 0; j--) {
//            printf("%d ", matrix[j][i]);
//        }
//        printf("\n");
//    }
//
//    return 0; // 1475 [����-�迭����] 2���� �迭 ������� ä��� 2-8
//}