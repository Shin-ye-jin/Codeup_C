#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int n, k, d[1010];
//
//int upper_bound(int k)
//{
//	int i;
//
//	for (i = 1; i <= n; i++) {
//		if (d[i] > k)
//			return i;
//	}
//	return n + 1;
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
//
//	printf("%d\n", upper_bound(k));
//
//	return 0; // 1571 [����-�Լ��ۼ�] �Լ��� Upper Bound ��ġ �����ϱ�
//}


//void f() {
//	printf("Hello?");
//}
//
//main()
//{
//	f();
//	// 1576 (�Լ��ۼ�) void�� �Լ�
//}

//int myabs(int a) {
//	if (a < 0)
//		return a * (-1);
//	else
//		return a;
//}
//
//main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", myabs(a));
//	// 1577 (�Լ� �ۼ�) ���� �Լ� 1
//}

//int mymax(int a, int b)
//{
//	if (a < b)
//		return b;
//	else
//		return a;
//}
//
//main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", mymax(a, b));
//	// 1578 (�Լ� �ۼ�) �ִ� �Լ�
//}

//int mymin(int a, int b)
//{
//	if (a < b)
//		return a;
//	else
//		return b;
//}
//
//main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", mymin(a, b));
//	// 1579 (�Լ� �ۼ�) �ּڰ� �Լ�
//}

//float circle(int r)
//{
//	return r * r * 3.14;
//}
//
//main()
//{
//	int r;
//	scanf("%d", &r);
//	printf("%.2f", circle(r));
//	// 1580 (�Լ� �ۼ�) ���� ����
//}