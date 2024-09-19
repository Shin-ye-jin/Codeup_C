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

//int main(void) {
//    int m, n, i, j;
//    scanf("%d", &m);
//    scanf("%d", &n);
//
//    int count[m + 1], num[n];
//    count[0] = 0;
//
//    for (i = 0; i < n; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    for (i = 1; i <= m; i++) {
//        count[i] = m + 1;
//        for (j = 0; j < n; j++) {
//            if (num[j] <= i) {
//                count[i] = (count[i] < count[i - num[j]] + 1) ? count[i] : count[i - num[j]] + 1;
//            }
//        }
//    }
//
//    printf("%d", count[m]);
//    return 0; // 2634 : 거스름돈 ||
//}

int cnt = 0;

void hanoi(int n, char from, char tmp, char to) {
    if (n == 1) {
        cnt += 1;
        printf("1 : %c->%c\n", from, tmp);
        cnt += 1;
        printf("1 : %c->%c\n", tmp, to);
//    }
//    else {
//        hanoi(n - 1, from, tmp, to);
//        cnt += 1;
//        printf("%d : %c->%c\n", n, from, tmp);
//        hanoi(n - 1, to, tmp, from);
//        cnt += 1;
//        printf("%d : %c->%c\n", n, tmp, to);
//        hanoi(n - 1, from, tmp, to);
//
//    }
//}
//
//int main(void) {
//    int n;
//    scanf("%d", &n);
//    hanoi(n, 'A', 'B', 'C');
//    printf("%d", cnt);
//    return 0; // 2698 최장 경로 하노이탑
//}