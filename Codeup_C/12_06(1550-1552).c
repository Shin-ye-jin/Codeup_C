#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//long long int n;
//
//long long int sqrt(long long int n) {
//	long long int num = 0;
//	long long int i;
//	for (i = 0; i <= n; i++) {
//		if (i * i > n)
//			break;
//		else
//			num = i;
//	}
//	return num;
//}
//
//int main()
//{
//	scanf("%lld", &n);
//	printf("%d\n", sqrt(n));
//	return 0; // 1550 [����-�Լ��ۼ�] �Լ��� ���� �������� ���� �κи� �����ϱ�
//}

//int n, d[100010], k;
//
//int f(int n) {
//	int count = 0, i;
//	for (i = 0; i < 100010; i++) {
//		if (d[i] == n)
//			return count;
//		count++;
//	}
//	return -1;
//}
//
//int main()
//{
//	scanf("%d", &n);
//
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &d[i]);
//
//	scanf("%d", &k);
//	printf("%d\n", f(k));
//	return 0; // 1551 [����-�Լ��ۼ�] �Լ��� ���ϴ� ���� ��ġ �����ϱ� 1
//}

//double x;
//
//double f(double x)
//{
//	int num;
//	num = x;
//	return x - num;
//}
//
//int main()
//{
//	scanf("%lf", &x);
//	printf("%.14lf\n", f(x));
//	return 0; // 1552 [����-�Լ��ۼ�] �Լ��� �Ҽ� �κи� �����ϱ�
//}