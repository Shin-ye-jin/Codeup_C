#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main() {
//    int n, k, i, s, e, u;
//    int d[100] = { 0 };
//    int num[100] = { 0 };
//
//    scanf("%d %d", &n, &k);
//
//    for (i = 0; i < k; i++) {
//        scanf("%d %d %d", &s, &e, &u);
//        d[s - 1] = d[s - 1] + u;
//        d[e] = d[e] - u;
//    }
//
//    for (i = 0; i < n; i++) {
//        printf("%d ", d[i]);
//    }
//    printf("\n");
//
//    for (i = 0; i < n; i++) {
//        if (i == 0) {
//            num[i] = d[i];
//            printf("%d ", num[i]);
//        }
//        else {
//            num[i] = num[i - 1] + d[i];
//            printf("%d ", num[i]);
//        }
//    }
//    return 0; // 1494 [기초-배열연습] 1차원 차이 배열 만들기 5-3
//}

//int main() {
//    int n, m, k, i, j, x1, y1, x2, y2, u;
//    int d[1001][1001];
//    int sum[1001][1001];
//
//    scanf("%d %d %d", &n, &m, &k);
//
//    for (i = 0; i < k; i++) {
//        scanf("%d %d %d %d %d", &x1, &y1, &x2, &y2, &u);
//        d[x1][y1] = d[x1][y1] + u;
//        d[x2 + 1][y2 + 1] = d[x2 + 1][y2 + 1] + u;
//        d[x1][y2 + 1] = d[x1][y2 + 1] - u;
//        d[x2 + 1][y1] = d[x2 + 1][y1] - u;
//    }
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            printf("%d ", d[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n");
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < m; j++) {
//            if (i == 0) {
//                sum[i][j] = d[i][j];
//                printf("%d ", sum[i][j]);
//            }
//            else {
//                sum[i][j] = sum[i - 1][j] + d[i][j] + sum[i][j - 1] - sum[i - 1][j - 1];
//                printf("%d ", sum[i][j]);
//            }
//        }
//        printf("\n");
//    }
//
//    return 0; // 1495 [기초-배열연습] 2차원 차이 배열 만들기 5-4
//}

//int main() {
//    int n, i;
//    int num[101];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    for (i = 0; i < n - 1; i += 2) {
//        if (num[i] > num[i + 1]) {
//            printf("%d ", num[i + 1]);
//        }
//        else {
//            printf("%d ", num[i]);
//        }
//    }
//    printf("\n");
//    return 0; // 1496 [기초-배열연습] 두 개씩 묶어 작은 값 골라 배열 만들기 5-5
//}