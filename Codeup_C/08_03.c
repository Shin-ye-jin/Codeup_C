#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int a, b;
//    char str1[101], str2[101];
//    int i;
//
//    scanf("%s %s", str1, str2);
//    a = strlen(str1);
//    b = strlen(str2);
//
//    if (a > b) {
//        printf("%s %s", str2, str1);
//    }
//    else if (a < b) {
//        printf("%s %s", str1, str2);
//    }
//    else {
//        for (i = 0; i < b; i++) {
//            if (str1[i] > str2[i]) {
//                printf("%s %s", str2, str1);
//                return 0;
//            }
//            else if (str1[i] < str2[i]) {
//                printf("%s %s", str1, str2);
//                return 0;
//            }
//        }
//    }
//
//    return 0; // 1754 큰 수 비교
//}

//int main(void) {
//
//    char num[501];
//    int i, sum = 0;
//    scanf("%s", num);
//
//    for (i = 0; num[i] != '\0'; i++) {
//        sum += num[i] - 48; // 문자 숫자로~!
//    }
//
//    if (sum % 3 == 0) {
//        printf("1");
//    }
//    else {
//        printf("0");
//    }
//
//    return 0; // 1990 3의 배수 판별하기
//}

//int main(void) {
//
//    char str1[30], str2[30], str3[30];
//    int n1, n2, n3;
//    scanf("%s", str1);
//    scanf("%s", str2);
//    scanf("%s", str3);
//
//    n1 = strlen(str1);
//    n2 = strlen(str2);
//    n3 = strlen(str3);
//
//    if (str1[n1 - 1] == str2[0] && str2[n2 - 1] == str3[0] && str3[n3 - 1] == str1[0]) {
//        printf("good");
//    }
//    else {
//        printf("bad");
//    }
//
//    return 0; // 2721 순환 문자열
//}