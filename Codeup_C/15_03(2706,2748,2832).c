#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


//long long int f(long long int a,long long int n) {
//	if (a < 10) return a;
//	else {
//		return (a % n) + f(a / n, n);
//	}
//}
//
//int main(void)
//{
//	long long int n,res1,res2;
//
//	scanf("%lld", &n);
//
//	res1 = f(n, 100);
//	res2 = f(n, 10);
//
//	if (res1 > res2) printf("%lld", res1);
//	else printf("%lld", res2);
//
//	return 0; //2706 ���� ���ϱ� (Easy)
//}

//int m, n, cnt,num[21];
//
//void f(int a,int sum) {
//	if (a < n) { // a==n�� �� ������
//		f(a + 1, sum + num[a]);
//		f(a + 1, sum - num[a]); // ������ ������ ���� �����Ͽ� ��� ����� �� ���ϱ�
//	}
//	else if (sum == m) cnt++; // ��� ���� ����� ��
//}
//
//int main(void)
//{
//	int i;
//	scanf("%d", &m);
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	f(0, 0);
//	printf("%d", cnt);
//	return 0; // 2748 ����, �������� n �����
//}


//int f(int n,int t) {
//	if (t <= 0 && n > 0) return 0; // ����� �� ���� �ͺ��� ó���ϱ�!!
//	else {
//		if (n == 1) return 1; // 1ĭ ������ ����� �� 1����
//		else if (n == 2) { // ĭ���� 2ĭ ������ ���
//			if (t == 1) return 1; // Ƚ���� �ѹ� ���� ��� 2ĭ �̵�
//			else return 2; // Ƚ���� 2�� ������ ��� 1ĭ�� 2��, 2ĭ �ѹ�
//		}
//		else {
//			return f(n - 2, t - 1) + f(n - 1, t - 1);
//		}
//	}
//}
//
//int main(void)
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//
//	printf("%d",f(n, k - 1));
//	return 0; // 2832 [���� ���Ǹ� ���� Ž��] ��� ������ 1-1
//}