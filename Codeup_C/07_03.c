#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int n, i,j=0,z;
//	int card[55];
//	int num[55];
//
//	scanf("%d", &n);
//
//	for (i = 1; i < n + 1; i++) {
//		card[j] = i;
//		j++;
//	}
//
//	for (i = 0; i < n - 1; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < n; i++) {
//		for (z = 0; z < n - 1; z++) {
//			if (card[i] == num[z])
//				card[i] = 0;
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		if (card[i] != 0)
//			printf("%d", card[i]);
//	}
//
//	return 0; // 1411 빠진 카드
//}

//int main(void)
//{
//	char temp[90] = { '0' }; // 배열 초기화해주기
//	char s[26];
//	char i;
//	int count = 0,j,z;
//	int num[26] = { 0 };
//
//	gets(temp); // 공백 포함해서 문장 입력 받기
//
//	for (i = 'a'; i <= 'z'; i++) {
//		s[count] = i;
//		count++;
//	}
//
//	for (j = 0; j < 26; j++) {
//		for (z = 0; z!=sizeof(temp)/sizeof(char); z++) { // 배열의 길이 구하기
//			if (s[j] == temp[z])
//				num[j]++;
//		}
//	}
//
//	for (i = 0; i < 26; i++) {
//		printf("%c:%d\n", s[i], num[i]);
//	}
//
//	return 0; // 1412 알파벳 개수 출력하기
//}

//int main(void)
//{
//	int n, i=0, j;
//	int num[255];
//
//	scanf("%d", &n);
//
//	while (n > 1) {
//		num[i] = n % 2;
//		i++;
//		n = n / 2;
//	}
//	num[i] = n;
//
//	for (j = i; j >= 0; j--) {
//		printf("%d", num[j]);
//	}
//	return 0; // 1416 2진수 변환
//}