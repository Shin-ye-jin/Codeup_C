#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

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
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0; // 1476 [����-�迭����] 2���� �迭 ���� ä��� 3-2
//}

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
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0; // 1477 [����-�迭����] 2���� �迭 ���� ä��� 3-2
//}

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
//    for (i = 0; i < n; i++) {
//        for (j = m - 1; j >= 0; j--) {
//            printf("%d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0; // 1478 [����-�迭����] 2���� �迭 ���� ä��� 3-3
//}