#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int n, m, i, j, count = 0, temp = 0;
//    int num[100][100];
//
//    scanf("%d %d", &n, &m);
//    count = m * n;
//
//    for (i = 0; i < n; i++) {
//        temp = count;
//        for (j = 0; j < m; j++) {
//            num[i][j] = temp;
//            printf("%d ", num[i][j]);
//            temp--;
//        }
//        count -= m;
//        printf("\n");
//    }
//
//    return 0; // 1464 [기초-배열연습] 2차원 배열 순서대로 채우기 1-5
//}

//int main() {
//    int n, m, i, j, count = 0, tmp = 0;
//    int num[100][100];
//
//    scanf("%d %d", &n, &m);
//
//    for (i = n - 1; i >= 0; i--) {
//        for (j = 0; j < m; j++) {
//            num[tmp][j] = i * m + j + 1;
//            printf("%d ", num[tmp][j]);
//        }
//        tmp++;
//        printf("\n");
//    }
//
//    return 0; // 1465 [기초-배열연습] 2차원 배열 순서대로 채우기 1-6
//}

//int main() {
//    int n, m, i, j, count = 0, temp = 0;
//    int num[100][100];
//
//    scanf("%d %d", &n, &m);
//    count = n * m;
//
//    for (i = 0; i < n; i++) {
//        temp = count;
//        for (j = 0; j < m; j++) {
//            num[i][j] = temp;
//            printf("%d ", num[i][j]);
//            temp -= n;
//        }
//        count -= 1;
//        printf("\n");
//    }
//
//    return 0; // 1466 [기초-배열연습] 2차원 배열 순서대로 채우기 1-7
//}

