#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//double x;
//
//long long int f(double x) {
//	long long int t = (long long int)x;
//
//	if (t < x)
//		return x + 1;
//	else
//		return x;
//}
//
//int main()
//{
//	scanf("%lf", &x);
//	printf("%lld\n", f(x));
//	return 0; // 1553 [����-�Լ��ۼ�] �Լ��� ���� �ø� �� �� �����ϱ�
//}

//double x;
//
//long long int f(double x) {
//	long long int t = (long long int)x;
//
//	if (t > x)
//		return x - 1; // ����!
//	else
//		return x;
//}
//
//int main()
//{
//	scanf("%lf", &x);
//	printf("%lld\n", f(x));
//	return 0; // 1554 [����-�Լ��ۼ�] �Լ��� ���� ���� �� �� �����ϱ�
//}

//int n;
//
//long long int f(int x) {
//	long long int i, sum = 0;
//
//	for (i = 1; i <= x; i++) {
//		sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	printf("%lld\n", f(n));
//	return 0; // 1555 [����-�Լ��ۼ�] �Լ��� n������ �� �����ϱ�
//}