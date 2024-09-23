#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int n[5];
//    int i, j, temp, mid = 0;
//
//    for (i = 0; i < 5; i++) {
//        scanf("%d", &n[i]);
//        mid += n[i];
//    }
//
//    for (i = 0; i < 4; i++) {
//        for (j = 0; j < 4 - i; j++) {
//            if (n[j] > n[j + 1]) {
//                temp = n[j];
//                n[j] = n[j + 1];
//                n[j + 1] = temp;
//            }
//        }
//    }
//
//    printf("%d\n%d", mid / 5, n[2]);
//
//    return 0; // 4531 대표 값 
//}

//int main() {
//    int n[7];
//    int re[7];
//    int i, j, temp, z = 0, sum = 0, min;
//
//    for (i = 0; i < 7; i++) {
//        scanf("%d", &n[i]);
//        if (n[i] % 2 == 1) {
//            re[z] = n[i];
//            sum += n[i];
//            z += 1;
//        }
//    }
//
//    if (sum == 0) {
//        printf("-1");
//    }
//    else {
//        for (i = 0; i < z - 1; i++) {
//            for (j = 0; j < z - 1 - i; j++) {
//                if (re[j] > re[j + 1]) {
//                    temp = re[j];
//                    re[j] = re[j + 1];
//                    re[j + 1] = temp;
//                }
//            }
//        }
//
//        printf("%d\n%d", sum, re[0]);
//    }
//
//    return 0; //4561 홀수
//}

//int main() {
//    int m, n, cnt = 0, z = 0, sum = 0, i, j;
//    int num[10000];
//
//    scanf("%d", &m);
//    scanf("%d", &n);
//    for (i = m; i <= n; i++) {
//        for (j = 2; j < i; j++) {
//            if (i % j == 0) {
//                cnt++;
//                continue;
//            }
//        }
//        if (cnt == 0 && i != 1) {
//            num[z] = i;
//            z += 1;
//        }
//        cnt = 0;
//    }
//
//    for (i = 0; i < z; i++) {
//        sum += num[i];
//    }
//    printf("%d\n%d", sum, num[0]);
//    return 0; // 4566 소수
//}