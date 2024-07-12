#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int n, i, j, count = 0;
//    int num[100][100];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        if (i % 2 == 0) {
//            count += n;
//            for (j = 0; j < n; j++) {
//                printf("%d ", count);
//                count--;
//            }
//        }
//        else {
//            count += (n + 1);
//            for (j = 0; j < n; j++) {
//                printf("%d ", count);
//                count++;
//            }
//            count--;
//        }
//        printf("\n");
//    }
//    return 0; // 1469 [기초-배열연습] 2차원 배열 지그재그 채우기 2-2
//}