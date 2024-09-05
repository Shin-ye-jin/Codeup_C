#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void f(int a, int b, int c, int d) {
//    int i, count = 0;
//    for (i = a + 1; i < b; i++) {
//        if (i == c || i == d) count++;
//    }
//    if (count == 1) printf("cross");
//    else printf("not cross");
//}
//int main(void)
//{
//    int a, b, c, d;
//    scanf("%d %d", &a, &b);
//    scanf("%d %d", &c, &d);
//
//    if (a < b) f(a, b, c, d);
//    else f(b, a, c, d);
//
//    return 0; // 2628 케익 자르기
//}

//int main(void)
//{
//    int a, b, i, j;
//    int result, cnt = 0;
//    int num[100000];
//
//    scanf("%d %d", &a, &b);
//
//    for (i = 0; i < a; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    for (i = 0; i < a; i++) {
//        if (num[i] > b)continue;
//        result = num[i];
//
//        if (num[i] == b) {
//            cnt++;
//            continue;
//        }
//        else {
//            for (j = i + 1; j < a; j++) {
//                result += num[j];
//                if (result > b)break;
//                else if (result == b) {
//                    cnt++;
//                    break;
//                }
//            }
//        }
//    }
//
//    printf("%d", cnt);
//    return 0; // 2631 보물 찾기
//}

//int main(void)
//{
//    int n, k, i, cnt = 0;
//    int num[100001];
//
//    scanf("%d %d", &n, &k);
//
//    for (i = 0; i < n; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    for (i = 0; i < n; i++) {
//        if (num[i] == k || num[i] > k) {
//            cnt = i + 1;
//            break;
//        }
//    }
//
//    if (cnt == 0) printf("%d", n + 1);
//    else printf("%d", cnt);
//
//    return 0; // 2633 Lower Bound
//}
