#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int f(int n, int r) {
//    if (n == r || r == 0) return 1;
//    else {
//        return f(n - 1, r - 1) + f(n - 1, r);
//    }
//}
//
//int main(void) {
//    int n, r, result;
//    scanf("%d %d", &n, &r);
//    result = f(n, r);
//    printf("%d", result);
//    return 0; // 1925 (재귀함수) nCr (Small)
//}

//long long int sum = 0;
//
//void f(long long int a, long long int b)
//{
//    if (a == b) {
//        return;
//    }
//    else {
//        if (a > b) {
//            sum++;
//            f(a / 2, b);
//        }
//        else {
//            sum++;
//            f(a, b / 2);
//        }
//    }
//}
//
//int main(void) {
//    long long int a, b;
//    scanf("%lld %lld", &a, &b);
//    f(a, b);
//    printf("%lld", sum);
//    return 0; // 1936 (재귀함수) 두 노드간의 거리
//}

//int f(int n) {
//    if (n == 1) return 1;
//    else if (n == 2) return 2;
//    else {
//        return f(n - 2) + f(n - 1);
//    }
//}
//
//int main(void) {
//    int n, res;
//    scanf("%d", &n);
//
//    res = f(n);
//    printf("%d", res);
//    return 0; // 2632 계단 오르기 1
//}