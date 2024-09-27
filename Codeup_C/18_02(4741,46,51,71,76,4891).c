#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int a, b, c, n = 0;
//    scanf("%d %d", &a, &b);
//    scanf("%d", &c);
//
//    b += c;
//
//    if (b >= 60) {
//        n = b / 60;
//        b %= 60;
//        a += n;
//        if (a >= 24) {
//            a -= 24;
//            printf("%d %d", a, b);
//        }
//        else
//            printf("%d %d", a, b);
//    }
//    else
//        printf("%d %d", a, b);
//    return 0; // 4741 오븐 시계
//}

//int main() {
//    int a, b, c, d, n1, n2, n3, n4;
//    scanf("%d %d %d", &a, &b, &c);
//    scanf("%d", &d);
//
//    n1 = d / 60;
//    n2 = d % 60;
//
//    b += n1;
//    c += n2;
//
//    if (c >= 60) {
//        n4 = c / 60;
//        c %= 60;
//        b += n4;
//        if (b >= 60) {
//            n3 = b / 60;
//            b %= 60;
//            a += n3;
//            if (a >= 24) {
//                a %= 24;
//                printf("%d %d %d", a, b, c);
//            }
//            else
//                printf("%d %d %d", a, b, c);
//        }
//        else
//            printf("%d %d %d", a, b, c);
//    }
//    else {
//        if (b >= 60) {
//            n3 = b / 60;
//            b %= 60;
//            a += n3;
//            if (a >= 24) {
//                a %= 24;
//                printf("%d %d %d", a, b, c);
//            }
//            else
//                printf("%d %d %d", a, b, c);
//        }
//        else
//            printf("%d %d %d", a, b, c);
//    }
//    return 0; // 4746 인공지능 시계
//}

//int main(void)
//{
//	return 0;// 4751 아시아 정보올림피아드
//}

//#include<string.h>
//int main() {
//    char m[50];
//    int res = 10;
//    scanf("%s", m);
//    for (int i = 1; i < strlen(m); i++) {
//        if (m[i] == m[i - 1]) {
//            res += 5;
//        }
//        else res += 10;
//    }
//
//    printf("%d", res);
//    return 0; // 4771 그릇
//}

//int n;
//int main() {
//    scanf("%d", &n);
//    printf("%c%c\n", 'A' + (n + 8) % 12, '0' + (n + 6) % 10);
//    return 0; // 4776 간지
//}

//int main(void)
//{
//	return 0; // 4891 행복
//}