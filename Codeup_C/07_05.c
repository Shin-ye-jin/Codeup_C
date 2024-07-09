#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void) {
//
//    char a[1001];
//    int i;
//
//    scanf("%s", a);
//
//    for (i = 0; i < strlen(a); i++) {
//        if (a[i] >= 'A' && a[i] <= 'Z') {
//            printf("%c", a[i] + 32);
//        }
//        else if (a[i] >= 'a' && a[i] <= 'z') {
//            printf("%c", a[i] - 32);
//        }
//        else {
//            printf("%c", a[i]);
//        }
//    }
//    return 0; // 1295 알파벳 대소문자 변환
//}

//int main(void)
//{
//    char s[100];
//
//    scanf("%s", s);
//
//    if (s[0] == 'l' && s[1] == 'o' && s[2] == 'v' && s[3] == 'e' && s[4] == '\0') {
//        printf("I %s you.", s);
//    }
//    return 0; // 1406 love
//}

//int main(void)
//{
//	char a[100];
//	int i, j;
//
//	gets(a);
//
//	for (i = 0; a[i] != '\0'; i++) {
//		if (a[i] == ' ')
//			continue;
//		else
//			printf("%c", a[i]);
//	}
//
//	return 0; // 1407 문자열 출력하기 1
//}