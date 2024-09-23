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