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