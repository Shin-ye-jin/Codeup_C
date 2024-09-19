#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int arr[1001][1001];
//
//int max(int a, int b) {
//    return a > b ? a : b;
//}
//
//int main() {
//    char s1[1001], s2[1001];
//    scanf("%s %s", s1, s2);
//    int len1 = strlen(s1);
//    int len2 = strlen(s2);
//
//    for (int i = 1; i <= len1; i++) {
//        for (int j = 1; j <= len2; j++) {
//            if (s1[i - 1] == s2[j - 1]) arr[i][j] = arr[i - 1][j - 1] + 1;   //조건에 따라 arr배열 채우기 
//            else arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
//        }
//    }
//
//    printf("%d", arr[len1][len2]);
//    return 0; // 2699 사투리
//}

//int num[10001];
//
//int f(int n)
//{
//    if (n == 1) return 1;
//    else if (n == 2) return 2;
//    else if (num[n] == 0) {
//        return num[n] = (f(n - 2) + f(n - 1)) % 100000007;
//    }
//    else return num[n];
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d", f(n));
//    return 0; // 3709 블럭 채우기 1
//}

//int num[10001] = { 0,0,0,2 };
//
//int f(int n)
//{
//    if (n == 1 || n == 2) return 0;
//    else if (num[n] == 0) {
//        return num[n] = (f(n - 3) * 2) % 100000007;
//    }
//    else return num[n];
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d", f(n));
//    return 0; // 3712 블럭 채우기 2
//}