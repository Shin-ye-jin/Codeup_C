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
//	return 0; // 1411 ���� ī��
//}

//int main(void)
//{
//	char temp[90] = { '0' }; // �迭 �ʱ�ȭ���ֱ�
//	char s[26];
//	char i;
//	int count = 0,j,z;
//	int num[26] = { 0 };
//
//	gets(temp); // ���� �����ؼ� ���� �Է� �ޱ�
//
//	for (i = 'a'; i <= 'z'; i++) {
//		s[count] = i;
//		count++;
//	}
//
//	for (j = 0; j < 26; j++) {
//		for (z = 0; z!=sizeof(temp)/sizeof(char); z++) { // �迭�� ���� ���ϱ�
//			if (s[j] == temp[z])
//				num[j]++;
//		}
//	}
//
//	for (i = 0; i < 26; i++) {
//		printf("%c:%d\n", s[i], num[i]);
//	}
//
//	return 0; // 1412 ���ĺ� ���� ����ϱ�
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
//	return 0; // 1416 2���� ��ȯ
//}