#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int i, res = 0, num;
//
//    for (i = 0; i < 5; i++) {
//        scanf("%d", &num);
//        res += (num * num);
//    }
//
//    printf("%d", res % 10);
//    return 0; // 4681 검증수
//}

//int main(void)
//{
//	return 0; // 4691 주사위 네 개
//}

//int main() {
//    int a, b, i, max, cnt;
//    scanf("%d %d", &a, &b);
//    max = b, cnt = b;
//
//    for (i = 0; i < 3; i++) {
//        scanf("%d %d", &a, &b);
//        cnt = cnt - a + b;
//        if (max < cnt) max = cnt;
//    }
//
//    printf("%d", max);
//    return 0; // 4711 지능형 기차
//}