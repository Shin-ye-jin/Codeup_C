#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//    char a[100];
//    int i;
//
//    scanf("%s", a);
//
//    for (i = 0; i < strlen(a); i++) {
//        printf("%c", a[i] + 2);
//    }
//    printf("\n");
//
//    for (i = 0; i < strlen(a); i++) {
//        printf("%c", a[i] * 7 % 80 + 48);
//    }
//    return 0; // 1408 암호처리
//}

//int main(void)
//{
//	char a[101];
//	int i, count = 0, count2 = 0;
//
//	scanf("%s", a);
//
//	for (i = 0; i < strlen(a); i++) {
//		if (a[i] == 'c' || a[i] == 'C') {
//			count++;
//		}
//	}
//
//	for (i = 0; i < strlen(a); i++) {
//		if (a[i] == 'c' && a[i + 1] == 'c')
//			count2++;
//		else if (a[i] == 'c' && a[i + 1] == 'C')
//			count2++;
//		else if (a[i] == 'C' && a[i + 1] == 'c')
//			count2++;
//		else if (a[i] == 'C' && a[i + 1] == 'C')
//			count2++;
//	}
//	printf("%d\n%d", count, count2);
//	return 0; // 1414 C언어를 찾아라
//}

//int main(void)
//{
//	char a[11];
//	int i, count = 0;
//
//	scanf("%s", a);
//
//	for (i = 0; i < strlen(a); i++) {
//		count++;
//		if (a[i] == 't')
//			printf("%d ", count);
//	}
//	return 0; // 1418 t를 찾아라
//}