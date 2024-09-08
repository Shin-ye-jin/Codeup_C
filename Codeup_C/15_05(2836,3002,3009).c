#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int f(int n, int k, int m)
//{
//	if (n != 0 && k == 0) return 0;
//	else if (n == 0 && k != 0) return 0;
//	else if (n == 0 && k == 0) return 1;
//	else if ((n - 1) == m) return f(n - 2, k - 1, m) + f(n - 3, k - 1, m);
//	else if ((n - 2) == m) return f(n - 1, k - 1, m) + f(n - 3, k - 1, m);
//	else if ((n - 3) == m) return f(n - 1, k - 1, m) + f(n - 2, k - 1, m);
//	else return f(n - 1, k - 1, m) + f(n - 2, k - 1, m) + f(n - 3, k - 1, m);
//}
//
//int main(void)
//{
//	int n, k, m, sum = 0, i;
//	scanf("%d %d %d", &n, &m, &k);
//
//	for (i = 1; i <= k - 1; i++) {
//		sum += f(n, i, m);
//	}
//
//	printf("%d", sum);
//  return 0; // 2836 [상태 정의를 통하 탐색] 계단 오르기 6-1
//}

//int a[1000000];
//
//int bin(int a[], int cnt, int res) {
//	int start = 0;
//	int end = cnt - 1;
//
//	while (start <= end) {
//		int mid = (start + end) / 2;
//
//		if (a[mid] == res) return mid;
//		else if (a[mid] > res) end = mid - 1;
//		else start = mid + 1;
//	}
//
//	return -1;
//}
//
//int main(void)
//{
//	int  i, j, n, m, cnt = 0, temp, res=0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//
//	scanf("%d", &m);
//
//	for (i = 0; i < m; i++) {
//		scanf("%d", &temp);
//		res = bin(a, n, temp);
//		if (res == -1)printf("%d ", res);
//		else printf("%d ", res + 1);
//	}
//	return 0; // 3002 기억력 테스트 3
//}

//int i, n, s, cnt=0, num[21];
//
//void f(int a,int b,int sum) { // a는 인덱스, b는 더하는 것의 유무
//	sum += num[a] * b;
//
//	if (a == n - 1) {
//		if (sum == s) cnt++;
//		return;
//	}
//	else {
//		f(a + 1, 0, sum);
//		f(a + 1, 1, sum);
//	}
//}
//
//int main(void)
//{
//	scanf("%d %d", &n, &s);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	f(0, 1, 0);
//	f(0, 0, 0);
//
//	printf("%d", cnt-(!s)*1);
//	return 0; // 3009 부분수열의 합
//}
