#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	char n[100];
//
//	scanf("%s", n);
//	
//	if (n[7] == '1') {
//		printf("19%c%c/%c%c/%c%c M", n[0], n[1], n[2], n[3], n[4], n[5]);
//	}
//	else if (n[7] == '2') {
//		printf("19%c%c/%c%c/%c%c F", n[0], n[1], n[2], n[3], n[4], n[5]);
//	}
//	else if(n[7]=='3'){
//		printf("20%c%c/%c%c/%c%c M", n[0], n[1], n[2], n[3], n[4], n[5]);
//	}
//	else {
//		printf("20%c%c/%c%c/%c%c F", n[0], n[1], n[2], n[3], n[4], n[5]);
//	}
//	return 0; // 4011 ������� ���
//}

//void f(unsigned n) {
//	if (n < 2) {
//		printf("%d", n);
//	}
//	else {
//		f(n / 2);
//		printf("%d", n % 2);
//	}
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//	printf("2 ");
//	f(n);
//	printf("\n");
//	printf("8 %o\n", n);
//	printf("16 %X", n);
//
//	return 0; // 4013 ���� ��ȯ
//}

//int main(void)
//{
//	int a, b, c, i,re;
//	scanf("%d %d %d", &a, &b, &c);
//
//	for (i = c; i >= 1; i--) {
//		if (a % i == 0 && b % i == 0 && c % i == 0) {
//			re = i;
//			break;
//		}
//	}
//
//	printf("%d", re);
//	return 0; // 4016 �� ���� �ִ����� ���ϱ�
//}

//int main(void)
//{
//	int num[7];
//	int i,sum=0,cnt=0;
//
//	for (i = 0; i < 7; i++) {
//		scanf("%d", &num[i]);
//		if (num[i] % 2 == 1) {
//			cnt++;
//			sum += num[i];
//		}
//	}
//
//	if (cnt == 0) printf("-1");
//	else printf("%d", sum);
//	return 0; // 4021 Ȧ���� �� ���ϱ�
//}

//int main(void)
//{
//	int num[5];
//	int i, j, mid, temp;
//
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < 4; i++) {
//		for (j = 0; j < 4-i; j++) {
//			if (num[j] > num[j + 1]) {
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("%d", num[2]);
//	return 0; // 4026 �߾� ��
//}

//int main(void)
//{
//	int num[7];
//	int re[7] = { 0 };
//	int te[7] = { 0 };
//	int i, j, z = 0,t=0, max, temp;
//
//	for (i = 0; i < 7; i++) {
//		scanf("%d", &num[i]);
//		if (num[i] % 2 == 1) {
//			re[z] = num[i];
//			z++;
//		}
//		else {
//			te[t] = num[i];
//			t++;
//		}
//	}
//
//	for (i = 0; i < z - 1; i++) {
//		for (j = 0; j < z - 1 - i; j++) {
//			if (re[j] > re[j + 1]) {
//				temp = re[j];
//				re[j] = re[j + 1];
//				re[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < t - 1; i++) {
//		for (j = 0; j < t - 1 - i; j++) {
//			if (te[j] > te[j + 1]) {
//				temp = te[j];
//				te[j] = te[j + 1];
//				te[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("%d", re[z - 1] + te[t - 1]);
//	return 0; // ���� ������ ���� �߻� 4031
//}

//int i, n, m1=0, m2=0;
//int main(void)
//{
//	for (i = 0; i < 7; i++) {
//		scanf("%d", &n);
//		if (n % 2 == 0) {
//			if (m1 < n)m1 = n;
//		}
//		else {
//			if (m2 < n) m2 = n;
//		}
//	}
//
//	printf("%d", m1 + m2);
//}