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
//    float n = 5, sum = 0, s, e, t;
//
//    while (n != 0) {
//        n--;
//        scanf("%f %f", &s, &e);
//        t = e - s - 1;
//        if (t <= 0.0) t = 0.0;
//        if (t >= 4.0) t = 4.0;
//        sum += (t / 0.5) * 5000;
//    }
//
//    if (sum >= 15 * 10000) {
//        sum = sum * 0.95;
//    }
//    else if (sum <= 5 * 10000) {
//        sum = sum * 1.05;
//    }
//
//    printf("%.0f", sum);
//    return 0; // 4051 시간 외 근무 수당
//}

//int main() {
//    int n, res;
//    scanf("%d", &n);
//
//    if (n <= 500)
//        res = n * 0.7;
//    else if (n <= 1500)
//        res = 350 + (n - 500) * 0.4;
//    else if (n <= 4500)
//        res = 750 + (n - 1500) * 0.15;
//    else if (n <= 10000)
//        res = 1200 + (n - 4500) * 0.05;
//    else
//        res = 1475 + (n - 10000) * 0.02;
//
//    printf("%d", res);
//    return 0; // 4056 연말 정산
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

//int max(int a, int b) {
//    if (a > b) return a;
//    else return b;
//}
//
//int main() {
//    int a, b, i, n;
//    scanf("%d %d", &a, &b);
//
//    n = max(a, b);
//
//    for (i = n; i >= 1; i--) {
//        if (a % i == 0 && b % i == 0) {
//            printf("%d\n%d", i, i * (a / i) * (b / i));
//            break;
//        }
//    }
//    return 0; // 4506 최대공약수와 최소공배수
//}