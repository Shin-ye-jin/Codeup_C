#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int f(int n,int t) {
//	if (t <= 0 && n > 0) return 0; 
//	else {
//		if (n == 1) return 1; 
//		else if (n == 2) { 
//			if (t == 1) return 1; 
//			else return 2; 
//		}
//		else if (n == 3) {
//			if (t == 1) return 1; // 3
//			else if (t == 2) return 3; // 3, 1 2, 2 1
//			else return 4; // 3, 1 2, 2 1, 1 1 1
//		}
//		else {
//			return f(n - 3, t - 1) + f(n - 2, t - 1) + f(n - 1, t - 1);
//		}
//	}
//}
//
//int main(void)
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//
//	printf("%d",f(n, k-1));
//	return 0; // 2833 [���� ���Ǹ� ���� Ž��] ��� ������ 2-1
//}

//int num[50][50];
//
//int f(int i, int j) {
//	if (i == 1) num[i][j] += num[0][j - 1]; // ù��° ��� ���� ó��
//	else num[i][j] = num[i - 1][j - 1] + num[i - 2][j - 1];
//
//	if (j <= i) return f(i, j + 1); // �̵��ϴ� Ƚ�� 1�� ����(��� ��ȣ���� ����������)
//}
//
//int main(void)
//{
//	int n, k, i, res=0;
//	scanf("%d %d", &n, &k);
//	num[0][1] = 1; // ���ĭ
//	for (i = 1; i <= n; i++) {
//		f(i, 1); // ��� ���� ���� ���� �� �ִ� ����� ��
//	}
//
//	for (i = 0; i <= k; i++) {
//		res += num[n][i] * num[n][i]; // �� ����̹Ƿ� ����� �� ���� ���ϱ�
//	}
//
//	printf("%d", res);
//	return 0; // 2834 [���� ���Ǹ� ���� Ž��] ��� ������ 3-1
//}

