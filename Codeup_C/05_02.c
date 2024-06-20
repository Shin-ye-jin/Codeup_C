#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//    int a, b, c, n, i;
//    scanf("%d %d %d %d", &a, &b, &c, &n);
//
//    for (i = 2; i <= n; i++) {
//        a = a * b + c;
//    }
//    printf("%d", a);
//    return 0; // 1269 수열의 값 구하기
//}

//int main(void) {
//    int num, i, count = 0;
//    scanf("%d", &num);
//
//    for (i = 1; i <= num; i++) {
//        if (i % 10 == 1) {
//            count++;
//        }
//    }
//    printf("%d", count);
//    return 0; // 1270 1의 개수는? 1
//}

//int main(void)
//{
//    int n, num, max = 0, i;
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf("%d", &num);
//        if (num > max) {
//            max = num;
//        }
//    }
//    printf("%d", max);
//    return 0; // 1271 최댓값 구하기
//}

//int main(void)
//{
//    int i, n1, n2, sum = 0;
//    scanf("%d %d", &n1, &n2);
//
//    if (n1 % 2 == 1) {
//        sum += n1 / 2 + 1;
//    }
//    else {
//        sum += n1 * 5;
//    }
//    if (n2 % 2 == 1) {
//        sum += n2 / 2 + 1;
//    }
//    else {
//        sum += n2 * 5;
//    }
//    printf("%d", sum);
//    return 0; // 1272 기부
//}

//int main(void)
//{
//    int num, i;
//    scanf("%d", &num);
//
//    for (i = 1; i <= num; i++) {
//        if (num % i == 0) {
//            printf("%d ", i);
//        }
//    }
//    return 0; // 1273 약수 구하기
//}

//int main(void)
//{
//    int num, i, count = 0;
//    scanf("%d", &num);
//
//    for (i = 2; i < num; i++) {
//        if (num % i == 0) {
//            count++;
//        }
//    }
//
//    if (count == 0)
//        printf("prime");
//    else
//        printf("not prime");
//
//    return 0; // 1274 소수 판별
//}