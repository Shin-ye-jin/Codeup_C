#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int n, m;
//    scanf("%d", &n);
//    scanf("%d", &m);
//
//    printf("%d\n", (n + m) / 2);
//    printf("%d", (n - m) / 2);
//    return 0; // 4036 합과 차
//}

//int main() {
//    int n, result = 0, cnt = 0, re = 0;
//    scanf("%d", &n);
//
//    while (n != 0) {
//        re = re * 10 + n % 10;
//        result += n % 10;
//        n = n / 10;
//    }
//    printf("%d\n%d", re, result);
//    return 0; // 4041 숫자 다루기
//}

//int main() {
//    int num[7];
//    int i, j, temp;
//
//    for (i = 0; i < 7; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    for (i = 0; i < 6; i++) {
//        for (j = 0; j < 6 - i; j++) {
//            if (num[j] > num[j + 1]) {
//                temp = num[j];
//                num[j] = num[j + 1];
//                num[j + 1] = temp;
//            }
//        }
//    }
//
//    printf("%d\n%d", num[6], num[5]);
//    return 0; // 4501 백설공주와 난쟁이
//}