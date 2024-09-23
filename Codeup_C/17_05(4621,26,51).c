#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int num[10000];
//    int n, k, z = 0, i;
//
//    scanf("%d %d", &n, &k);
//
//    for (i = 1; i <= n; i++) {
//        if (n % i == 0) {
//            num[z] = i;
//            z += 1;
//        }
//    }
//
//    printf("%d", num[k - 1]);
//    return 0; // 4621 약수 구하기
//}

//int main() {
//    int n, i, cnt = 0, sum = 0;
//    int num[100];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    for (i = 0; i < n; i++) {
//        if (num[i] == 1) {
//            if (num[i - 1] >= 1 && i != 0) {
//                num[i] = num[i - 1] + 1;
//                sum += num[i];
//            }
//            else {
//                sum++;
//            }
//        }
//    }
//
//    printf("%d", sum);
//
//    return 0; // 4626 점수 계산
//}

//int main() {
//    int matrix[3][10];
//    int cnt = 0, i, j;
//
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 4; j++) {
//            scanf("%d", &matrix[i][j]);
//            if (matrix[i][j] == 1) {
//                cnt++;
//            }
//        }
//
//        if (cnt == 3) printf("A\n");
//        else if (cnt == 2) printf("B\n");
//        else if (cnt == 1) printf("C\n");
//        else if (cnt == 0) printf("D\n");
//        else printf("E\n");
//        cnt = 0;
//    }
//    return 0; // 4651 윷놀이
//}