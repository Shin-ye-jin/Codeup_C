#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int a, b, i, count = 0;
//
//    scanf("%d %d", &a, &b);
//
//    if (a < b) {
//        for (i = a; i >= 1; i--) {
//            if (a % i == 0 && b % i == 0) {
//                count++;
//                printf("%d", i);
//                break;
//            }
//        }
//    }
//    else {
//        for (i = b; i >= 1; i--) {
//            if (a % i == 0 && b % i == 0) {
//                count++;
//                printf("%d", i);
//                break;
//            }
//        }
//    }
//
//    if (count == 0) printf("1");
//    return 0; // 2623 최대공약수 구하기
//}

//int main(void)
//{
//    int n, i, j, k, count = 0;
//    scanf("%d", &n);
//
//    for (i = 1; i < n; i++) {
//        for (j = 0; j < n; j++) {
//            for (k = j; k < n; k++) {
//                if (i <= j && i + j > k && i + j + k == n) {
//                    count += 1;
//                }
//            }
//        }
//    }
//    printf("%d", count);
//    return 0; // 2625 삼각화단 만들기 (Small)
//}

//int main(void)
//{
//    long long int i, j, k, n, count = 0;
//    scanf("%lld", &n);
//
//    for (i = n / 3; i <= n / 2; i++) {
//        for (j = 1; j <= n / 3; j++) {
//            k = n - i - j;
//            if (j <= k && k <= i && j + k > i) count++;
//        }
//    }
//
//    printf("%lld", count); // 2626 (python) 삼각화단 만들기 (Large)
//}
