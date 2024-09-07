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
//	return 0; // 2833 [상태 정의를 통한 탐색] 계단 오르기 2-1
//}

//int num[50][50];
//
//int f(int i, int j) {
//	if (i == 1) num[i][j] += num[0][j - 1]; // 첫번째 계단 예외 처리
//	else num[i][j] = num[i - 1][j - 1] + num[i - 2][j - 1];
//
//	if (j <= i) return f(i, j + 1); // 이동하는 횟수 1씩 증가(계단 번호보다 작을때까지)
//}
//
//int main(void)
//{
//	int n, k, i, res=0;
//	scanf("%d %d", &n, &k);
//	num[0][1] = 1; // 출발칸
//	for (i = 1; i <= n; i++) {
//		f(i, 1); // 계단 개수 마다 나올 수 있는 경우의 수
//	}
//
//	for (i = 0; i <= k; i++) {
//		res += num[n][i] * num[n][i]; // 두 사람이므로 경우의 수 서로 곱하기
//	}
//
//	printf("%d", res);
//	return 0; // 2834 [상태 정의를 통한 탐색] 계단 오르기 3-1
//}

