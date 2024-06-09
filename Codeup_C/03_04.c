#include<stdio.h>

//int main(void)
//{
//    int a;
//    scanf("%d", &a);
//
//    if (a % 400 == 0) {
//        printf("Leap");
//    }
//    else if (a % 4 == 0 && a % 100 != 0) {
//        printf("Leap");
//    }
//    else
//        printf("Normal");
//
//    return 0; // 1166 윤년 판별
//}

//int main(void)
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a <= b && a <= c)
//        if (b <= c)
//            printf("%d", b);
//        else
//            printf("%d", c);
//    else if (b <= a && b <= c)
//        if (a <= c)
//            printf("%d", a);
//        else
//            printf("%d", c);
//    else
//        if (a <= b)
//            printf("%d", a);
//        else
//            printf("%d", b);
//
//    return 0; // 두 번째 수
//}

//int main(void)
//{
//    int a,b;
//    scanf("%d %d",&a,&b);
//    
//    if(b==1 || b==2)
//        printf("%d",100-a/10000+13);
//    else
//        printf("%d",12-a/10000+1);
//
//    return 0; // 1168 나이 계산 1
//}

//int main(void)
//{
//    int a, num = 0;
//    scanf("%d", &a);
//    num = a - 13;
//
//    if (num > 0) {
//        printf("%d %d", 100 - num, 1);
//    }
//    else {
//        printf("%d %d", 0 - num, 3);
//    }
//
//    return 0; //1169 나이 계산 2
//}

//int main(void)
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (c < 10) {
//        printf("%d%d0%d", a, b, c);
//    }
//    else {
//        printf("%d%d%d", a, b, c);
//    }
//
//    return 0; // 1170 당신의 학번은? 1
//}

//int main(void)
//{
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (b < 10) {
//        if (c < 10)
//            printf("%d0%d00%d", a, b, c);
//        else if (c < 100)
//            printf("%d0%d0%d", a, b, c);
//        else
//            printf("%d0%d%d", a, b, c);
//    }
//    else {
//        if (c < 10)
//            printf("%d%d00%d", a, b, c);
//        else if (c < 100)
//            printf("%d%d0%d", a, b, c);
//        else
//            printf("%d%d%d", a, b, c);
//    }
//
//    return 0; // 1171 당신의 학번은? 2
//}