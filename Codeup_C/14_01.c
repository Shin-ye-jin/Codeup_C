#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void f(int n) {
//	if (n == 0)
//		return;
//	else { 
//		f(n - 1); // �Լ� ���� ���� top-down ���
//		printf("%d\n", n);
//	}
//}
//
//int main(void)
//{
//	int i, n;
//	scanf("%d", &n);
//	f(n);
//	return 0; // 1901 (��� �Լ�) 1���� n���� ����ϱ�
//}

//void f(int n)
//{
//	if (n == 0)
//		return;
//	else {
//		printf("%d\n", n);
//		f(n - 1);
//	}
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	f(n);
//	return 0; // 1902 (��� �Լ�) 1���� n���� �������� ����ϱ�
//}

//void f(int a, int b)
//{
//	if (a > b)
//		return;
//	else {
//		if (a % 2 == 1) {
//			printf("%d ", a);
//			f(a + 1, b);
//		}
//		else
//			f(a + 1, b);
//	}
//}
//
//int main(void)
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	f(a, b);
//	return 0; // 1904 (����Լ�) �� �� ������ Ȧ�� ����ϱ�
//}