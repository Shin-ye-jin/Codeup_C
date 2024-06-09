#include<stdio.h>

//int main(void)
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a <= b && a <= c) {
//        if (b <= c)
//            printf("%d %d %d", a, b, c);
//        else
//            printf("%d %d %d", a, c, b);
//    }
//    else if (b <= a && b <= c) {
//        if (a <= c)
//            printf("%d %d %d", b, a, c);
//        else
//            printf("%d %d %d", b, c, a);
//    }
//    else {
//        if (a <= b)
//            printf("%d %d %d", c, a, b);
//        else
//            printf("%d %d %d", c, b, a);
//    }
//
//    return 0; // 1172 세 수 정렬하기
//}

//int main(void)
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    if (b < 30) {
//        if (a < 1) {
//            printf("%d %d", a + 23, b + 30);
//        }
//        else {
//            printf("%d %d", a - 1, b + 30);
//        }
//    }
//    else {
//        printf("%d %d", a, b - 30);
//    }
//
//    return 0; // 1173 30분전
//}

//int main(void)
//{
//    int a, b, c, d;
//    scanf("%d", &a);
//    b = a / 10;
//    c = a % 10;
//    d = (c * 10 + b) * 2;
//
//    if (d < 100) {
//        if (d <= 50) {
//            printf("%d\nGOOD", d);
//        }
//        else {
//            printf("%d\nOH MY GOD", d);
//        }
//    }
//    else {
//        d = d - 100;
//        if (d <= 50) {
//            printf("%d\nGOOD", d);
//        }
//        else {
//            printf("%d\nOH MY GOD", d);
//        }
//    }
//
//    return 0; // 1180 만능 휴지통
//}

//int main(void)
//{
//    int a;
//    scanf("%d", &a);
//
//    if (a > 0) {
//        printf("양수");
//    }
//    else if (a == 0) {
//        printf("0");
//    }
//    else {
//        printf("음수");
//    }
//    return 0; // 1201 정수 판별
//}

//int main(void)
//{
//    int a;
//    scanf("%d", &a);
//
//    if (a >= 90)
//        printf("A");
//    else if (a >= 80)
//        printf("B");
//    else if (a >= 70)
//        printf("C");
//    else if (a >= 60)
//        printf("D");
//    else
//        printf("F");
//    return 0; // 1202 등급 판정
//}

//int main(void)
//{
//    int a;
//    scanf("%d", &a);
//
//    if (a > 20)
//        printf("비만");
//    else if (a > 10)
//        printf("과체중");
//    else
//        printf("정상");
//    return 0; // 1203 비만도 측정 0
//}