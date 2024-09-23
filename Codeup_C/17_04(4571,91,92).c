#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int m, n, cnt = 0, cnt2 = 0, sum = 0, z = 0, i, j;
//    int num[10000];
//
//    scanf("%d", &m);
//    scanf("%d", &n);
//
//    for (i = m; i <= n; i++) {
//        for (j = 1; j <= i; j++) {
//            if (i % j == 0) cnt++;
//        }
//        if (cnt % 2 == 1) {
//            cnt2 += 1;
//            num[z] = i;
//            z += 1;
//        }
//        cnt = 0;
//    }
//
//    if (cnt2 == 0) printf("-1");
//    else {
//        for (i = 0; i < z; i++) {
//            sum += num[i];
//        }
//        printf("%d\n%d", sum, num[0]);
//    }
//
//    return 0; // 4571 완전제곱수
//}

//int main() {
//    int num, max = 0, cnt = 0, i;
//
//    for (i = 0; i < 9; i++) {
//        scanf("%d", &num);
//        if (max < num) {
//            max = num;
//            cnt = i;
//        }
//    }
//
//    printf("%d\n%d", max, cnt + 1);
//
//    return 0; // 4591 최대값
//}

//int main() {
//    int matrix[100][100] = { 0 };
//    int n, i, j, k, cnt = 0, a, b;
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf("%d %d", &a, &b);
//        for (j = a; j < a + 10; j++) {
//            for (k = b; k < b + 10; k++) {
//                matrix[j][k] += 1;
//            }
//        }
//    }
//
//    for (i = 0; i < 100; i++) {
//        for (j = 0; j < 100; j++) {
//            if (matrix[i][j] > 0) {
//                cnt += 1;
//            }
//        }
//    }
//
//    printf("%d", cnt);
//
//    return 0; // 4592 색종이 1
//}