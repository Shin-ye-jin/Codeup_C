#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int num[10001] = { 1,1 };
//
//int f(int n)
//{
//    if (n == 1) return 1;
//    else if (num[n] == 0) {
//        return num[n] = (f(n - 2) * 2 + f(n - 1)) % 100007;
//    }
//    else return num[n];
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d", f(n));
//    return 0; // 3713 블럭 채우기 3
//}

//int num[10001] = { 0,1,5,11, };
//
//int f(int n)
//{
//    if (num[n] == 0) {
//        return num[n] = (f(n - 3) * 2 + f(n - 2) * 4 + f(n - 1)) % 100007;
//    }
//    else return num[n];
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d", f(n));
//    return 0; // 3714 블럭 채우기 4
//}

//int num[10001] = { 0,1,2,6, };
//
//int f(int n)
//{
//    if (num[n] == 0) {
//        return num[n] = (f(n - 2) + f(n - 1) + 3 * f(n - 3)) % 1000;
//    }
//    else return num[n];
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d", f(n));
//    return 0; // 3716 블럭 채우기 5
//}