#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int i, n, k, result = 1;
//	scanf("%d %d", &n, &k);
//
//	for (i = 0; i < k; i++) {
//		result = result * n;
//	}
//	printf("%d", result);
//	return 0; //1275 K ���� ���ϱ�
//}

//int main(void)
//{
//	int n, i, result = 1;
//	scanf("%d", &n);
//	
//	for (i = n; i>0; i--) {
//		result = result * i;
//	}
//	printf("%d", result);
//	return 0; // 1276 ���丮�� ���
//}

//int main(void) {
//	int n, i, num;
//	scanf("%d", &n);
//	
//	if (n == 1) {
//		scanf("%d", &num);
//		printf("%d %d %d", num, num, num);
//	}
//	else {
//		for (i = 1; i <= n; i++) {
//			scanf("%d", &num);
//			if (i == 1 || i == (n + 1) / 2 || i == n) {
//				printf("%d ", num);
//			}
//		}
//	}
//	
//	return 0; // 1277 �� ��° ������ ����ϱ�
//}

//int main(void)
//{
//	int n, count = 0;
//	scanf("%d", &n);
//	while (n > 0) {
//		n = n / 10;
//		count++;
//	}
//	printf("%d", count);
//	return 0; // 1278 �ڸ��� ���
//}

//int main(void)
//{
//	int sum = 0, i, a, b;
//	scanf("%d %d", &a, &b);
//
//	for (i = a; i <= b; i++) {
//		if (i % 2 == 1) {
//			sum += i;
//		}
//		else {
//			sum -= i;
//		}
//	}
//	printf("%d", sum);
//	return 0; //1279 Ȧ���� ���ϰ� ¦���� ���� 1
//}

//int main(void)
//{
//	int a, b, sum = 0, i;
//	scanf("%d %d", &a, &b);
//
//	for (i = a; i <= b; i++) {
//		if (i % 2 == 1) {
//			sum += i;
//			printf("+%d", i);
//		}
//		else {
//			sum -= i;
//			printf("-%d", i);
//		}
//	}
//	printf("=%d", sum);
//	return 0; // 1280 Ȧ���� ���ϰ� ¦���� ���� 2
//}

