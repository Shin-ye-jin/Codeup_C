#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int n, m;
//
//long long int f(long long int n, long long int m) {
//	return n + m;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	printf("%lld\n", f(n, m));
//	return 0; // 1559 [����-�Լ��ۼ�] �Լ��� �� ������ �� �����ϱ�
//}

//long long int n, m;
//
//long long int f(long long int n, long long int m) {
//	if (n < m)
//		return m - n;
//	else
//		return n - m;
//}
//
//int main()
//{
//	scanf("%lld%lld", &n, &m);
//	printf("%lld\n", f(n, m));
//	return 0; // 1560 [����-�Լ��ۼ�] �Լ��� �� ������ ���� �� �����ϱ�
//}

//int n, m;
//
//int max(int n, int m)
//{
//	if (n < m)
//		return m;
//	else
//		return n;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	printf("%d\n", max(n, m));
//	return 0; // 1561 [����-�Լ��ۼ�] �Լ��� �� ������ ū �� �����ϱ�
//}

//int n, m;
//
//int min(int n, int m)
//{
//	if (n < m)
//		return n;
//	else
//		return m;
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	printf("%d\n", min(n, m));
//	return 0; // 1562 [����-�Լ��ۼ�] �Լ��� �� ������ ���� �� �����ϱ�
//}

//int n, m, x;
//
//int max(int p, int q) { return p >= q ? p : q; }
//int min(int p, int q) { return p < q ? p : q; }
//
//int mid(int n, int m, int x)
//{
//	return n + m + x - max(max(n, m), x) - min(min(n, m), x);
//}
//
//int main()
//{
//	scanf("%d%d%d", &n, &m, &x);
//	printf("%d\n", mid(n, m, x));
//	return 0; // 1563 [����=�Լ��ۼ�] �Լ��� �� ���� �� �߰� �� �����ϱ�
//}

//int a, b;
//
//int gcd(int a, int b)
//{
//	int result=1, i;
//
//	if (a < b) {
//		for (i = 1; i <= a; i++) {
//			if (a % i == 0 && b % i == 0)
//				result = i;
//		}
//	}
//	else {
//		for (i = 1; i <= b; i++) {
//			if (a % i == 0 && b % i == 0)
//				result = i;
//		}
//	}
//
//	return result;
//}
//
//int main()
//{
//	scanf("%d%d", &a, &b);
//	printf("%d\n", gcd(a, b));
//	return 0; // 1564 [����-�Լ��ۼ�] �Լ��� �ִ����� �����ϱ�
//}