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
//	if (k == 1) { // 전부다 했을 경우 다음으로 이동
//		f(n - 1, n - 1);
//		printf("\n");
//	}
//	else { // n번 만큼 *출력하기 위해 실시
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
//	return 0; // 1953 (재귀함수) 삼각형 출력하기 1
//}

//int n[51][51] = { 1 };
//
//int f(int r, int c)
//{
//	if (n[r][c] != 0) return n[r][c]; // 메모리제이션 이미 있으면 해당 값 쓰기
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
//	return 0; //3702 파스칼의 삼각형 2
//}

//int a[100001] = { 1,1,2 };
//
//int f(int n) {
//
//	if (a[n] != 0) // 메모리제이션
//		return a[n];
//	else
//		return a[n] = (f(n - 1) + f(n - 2) + f(n - 3)) % 1000;
//	// 규칙 찾기 0부터! 
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d",f(n));
//	return 0; // 3704 계단 오르기 2
//}

//long long int num[10000001] = { 0 };
//
//long long int f(long long int n)
//{
//	if (n == 1)	return 1;
//
//	if (n > 10000000) { // 지정된 수를 넘으면 횟수만 셈
//		if (n % 2 == 0)
//			return f(n / 2) + 1;
//		else
//			return f(n * 3 + 1) + 1;
//	}
//
//	if (num[n] != 0) return num[n]; // 메모리제이션
//
//	if (n % 2 == 0)
//		return num[n] = f(n / 2) + 1;
//	else
//		return num[n] = f(n * 3 + 1) + 1;
//}
//
//int main(void)
//{
//	long long int a, b, i, count = 0;
//	long long int max = num[0];
//	scanf("%lld %lld", &a, &b);
//	
//	for (i = a; i <= b; i++) {
//		if (!num[i])f(i);
//
//		if (max < num[i]) {
//			max = num[i];
//			count = i;
//		}
//	}
//
//	printf("%lld %lld", count, max);
//
//	return 0; // 3733 우박수 길이(3n+1) (Large)
//}

//int num[333] = { 0 };
//int s[301] = { 0 };
//
//int max(int a, int b){ return a > b ? a : b; }
//
//int f(int n) {
//	if (n < 0)return 0;
//
//	if (n == 1)return num[1] = s[1];
//	if (n == 2) return num[2] = s[2] + s[1];
//
//	if (num[n] != 0)return num[n];
//	else return num[n] = max(f(n - 3) + s[n - 1], f(n - 2)) + s[n];
//}
//
//int main(void)
//{
//	int n, num, i;
//	scanf("%d", &n);
//
//	for (i = 1; i < n+1; i++) {
//		scanf("%d", &s[i]);
//	}
//
//	printf("%d\n", f(n));
//	return 0; // 4564 계단 오르기
//}