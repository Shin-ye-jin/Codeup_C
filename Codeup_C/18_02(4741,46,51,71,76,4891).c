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
//    return 0; // 4741 ���� �ð�
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
//    return 0; // 4746 �ΰ����� �ð�
//}

//int main(void)
//{
//	return 0;// 4751 �ƽþ� �����ø��ǾƵ�
//}