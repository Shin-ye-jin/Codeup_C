#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int SuperSum(int k, int n)
//{
//	int i, sum = 0;
//
//	if (k == 0) return n;
//
//	for (i = 1; i <= n; i++)
//		sum += SuperSum(k - 1, i);
//	return sum;
//}
//
//int main(void)
//{
//	int n, k;
//
//	while (scanf("%d %d", &k, &n) != EOF)
//		printf("%d\n", SuperSum(k, n));
//
//	return 0; // 1930 SuperSum
//}

//void f(int n, int k)
//{
//	if (n == 1) {
//		printf("*");
//		return;
//	}
//
//	if (k == 1) { // ���δ� ���� ��� �������� �̵�
//		f(n - 1, n - 1);
//		printf("\n");
//	}
//	else { // n�� ��ŭ *����ϱ� ���� �ǽ�
//		f(n, k - 1);
//	}
//	printf("*");
//	return;
//}
//
//int main(void)
//{
//	int n;
//
//	scanf("%d", &n);
//	f(n,n);
//	return 0; // 1953 (����Լ�) �ﰢ�� ����ϱ� 1
//}

//int n[51][51] = { 1 };
//
//int f(int r, int c)
//{
//	if (n[r][c] != 0) return n[r][c]; // �޸����̼� �̹� ������ �ش� �� ����
//
//	if (r == 1 || c == 1)
//		return 1;
//	else
//		n[r][c] = f(r, c - 1) + f(r - 1, c);
//
//	return n[r][c] % 100000000;
//}
//
//int main(void)
//{
//	int r, c, result=0;
//	scanf("%d %d", &r, &c);
//
//	result=f(r, c);
//	printf("%d", result);
//	return 0; //3702 �Ľ�Į�� �ﰢ�� 2
//}