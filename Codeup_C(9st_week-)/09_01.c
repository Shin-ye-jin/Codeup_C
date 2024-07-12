#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int n, i, j, count = 0;
//    int matrix[100][100];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        if (i % 2 == 1) {
//            for (j = n - 1; j >= 0; j--) {
//                count++;
//                matrix[i][j] = count;
//            }
//        }
//        else {
//            for (j = 0; j < n; j++) {
//                count++;
//                matrix[i][j] = count;
//            }
//        }
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            printf("%d ", matrix[j][i]);
//        }
//        printf("\n");
//    }
//    return 0; // 1470 [기초-배열연습] 2차원 배열 지그재그 채우기 2-3
//}

int main() {
    int n, i, j, count = 0;
    int matrix[100][100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (j = n - 1; j >= 0; j--) {
                count++;
                matrix[i][j] = count;
            }
        }
        else {
            for (j = 0; j < n; j++) {
                count++;
                matrix[i][j] = count;
            }
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
    return 0; // 1471 [기초-배열연습] 2차원 배열 지그재그 채우기 2-4
}

