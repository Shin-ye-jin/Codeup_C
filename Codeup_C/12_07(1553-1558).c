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

//int n;
//
//long long int f(int n) {
//	long long int i, result = 1;
//
//	for (i = n; i >= 1; i--) {
//		result *= i;
//	}
//
//	return result;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	printf("%lld\n", f(n));
//	return 0; // 1556 [����-�Լ��ۼ�] �Լ��� n! �����ϱ�
//}

//int n;
//
//int f(int n) {
//	int i, count = 0;
//	
//	for (i = 1; i <= n; i++) {
//		if (n % i == 0) {
//			count++;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	printf("%d\n", f(n));
//	return 0; // 1557 [����-�Լ��ۼ�] �Լ��� n�� ����� ���� �����ϱ�
//}

//long long int n;
//
//long long int f(long long int n) {
//	long long int i,number=0;
//
//	while (n >9) { // 10������ ���� ����
//		number = n % 10;
//		printf("%d", number);
//		n = n / 10;
//	}
//	return n; 
//}
//
//int main()
//{
//	scanf("%lld", &n);
//	printf("%lld\n", f(n));
//	return 0; // 1558 [����-�Լ��ۼ�] �Լ��� ���� ������ �����ϱ�
//}