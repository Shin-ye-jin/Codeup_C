#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int n, i, j, temp;
//	int num[10001];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < n-1; i++) {
//		for (j = 0; j < n - 1 - i; j++) { // �� ���� ���ĵ� ����
//			if (num[j] > num[j + 1]) {
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		printf("%d\n", num[i]);
//	}
//	return 0; // 1451 ������ ���� (small)
//}

// 1452 �ð��ʰ�

//int main(void)
//{
//	int n, i, j, temp;
//	int num[101];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < n-1; i++) {
//		for (j = 0; j < n - 1 - i; j++) {
//			if (num[j] > num[j + 1]) {
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i =n-1; i>=0; i--) {
//		printf("%d ", num[i]);
//	}
//	return 0; // 1709 �������� ����
//}