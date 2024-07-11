#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int n, i, j, count = 1;
//    int num[100][100];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            num[i][j] = count;
//            printf("%d ", num[i][j]);
//            count++;
//        }
//        printf("\n");
//    }
//
//    return 0; // 1460 [기초-배열연습] 2차원 배열 순서대로 채우기 1-1
//}

//int main() {
//    int n, i, j, count = 1, temp = 0;
//    int num[100][100];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        count = n * (i + 1);
//        temp = count;
//        for (j = 0; j < n; j++) {
//            num[i][j] = temp;
//            printf("%d ", num[i][j]);
//            temp--;
//        }
//        printf("\n");
//    }
//
//    return 0; // 1461 [기초-배열연습] 2차원 배열 순서대로 채우기 1-2
//}

//int main() {
//    int n, i, j, count = 1, temp = 0;
//    int num[100][100];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        count = i + 1;
//        temp = count;
//        for (j = 0; j < n; j++) {
//            num[i][j] = temp;
//            printf("%d ", num[i][j]);
//            temp += n;
//        }
//        printf("\n");
//    }
//
//    return 0; // 1462 [기초-배열연습] 2차원 배열 순서대로 채우기 1-3
//}

//int main() {
//    int n, i, j, count = 1, temp = 0;
//    int num[100][100];
//
//    scanf("%d", &n);
//    count = n;
//
//    for (i = 0; i < n; i++) {
//        temp = count;
//        for (j = 0; j < n; j++) {
//            num[i][j] = temp;
//            printf("%d ", num[i][j]);
//            temp += n;
//        }
//        printf("\n");
//        count--;
//    }
//
//    return 0; // 1463 [기초-배열연습] 2차원 배열 순서대로 채우기 1-4
//}
