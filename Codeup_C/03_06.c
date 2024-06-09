#include<stdio.h>

//int main(void)
//{
//    int a;
//    scanf("%d", &a);
//
//    if (a == 11 || a == 12 || a == 13)
//        printf("%dth", a);
//    else
//        if (a % 10 == 1)
//            printf("%dst", a);
//        else if (a % 10 == 2)
//            printf("%dnd", a);
//        else if (a % 10 == 3)
//            printf("%drd", a);
//        else
//            printf("%dth", a);
//    return 0; // 영어 서수로 표현하기
//}

#include<math.h>
//int main(void)
//{
//    int a, b;
//    float max;
//    scanf("%d %d", &a, &b);
//
//    max = a + b;
//
//    if (a - b > max) {
//        max = a - b;
//    }
//    if (b - a > max) {
//        max = b - a;
//    }
//
//    if (a * b > max) {
//        max = a * b;
//    }
//
//    if ((float)(a / b) > max) {
//        max = (float)(a / b);
//    }
//    if ((float)(b / a) > max) {
//        max = (float)(b / a);
//    }
//
//    if (pow(a, b) > max) {
//        max = pow(a, b);
//    }
//    if (pow(b, a) > max) {
//        max = pow(b, a);
//    }
//
//    printf("%.06f", max);
//    return 0; // 1205 최댓값
//}

//int main(void)
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//
//    if (a % b == 0)
//        printf("%d*%d=%d", b, (a / b), a);
//    else if (b % a == 0)
//        printf("%d*%d=%d", a, (b / a), b);
//    else
//        printf("none");
//    return 0; // 1206 배수
//}