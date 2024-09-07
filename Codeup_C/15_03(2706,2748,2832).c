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
//	return 0; //2706 숫자 더하기 (Easy)
//}

//int m, n, cnt,num[21];
//
//void f(int a,int sum) {
//	if (a < n) { // a==n이 될 때까지
//		f(a + 1, sum + num[a]);
//		f(a + 1, sum - num[a]); // 덧셈과 뺄셈을 동시 진행하여 모든 경우의 수 구하기
//	}
//	else if (sum == m) cnt++; // 모든 수를 계산한 값
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
//	return 0; // 2748 덧셈, 뺄셈으로 n 만들기
//}


//int f(int n,int t) {
//	if (t <= 0 && n > 0) return 0; // 경우의 수 없는 것부터 처리하기!!
//	else {
//		if (n == 1) return 1; // 1칸 남으면 경우의 수 1가지
//		else if (n == 2) { // 칸수가 2칸 남았을 경우
//			if (t == 1) return 1; // 횟수가 한번 남은 경우 2칸 이동
//			else return 2; // 횟수가 2번 남았을 경우 1칸씩 2번, 2칸 한번
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
//	return 0; // 2832 [상태 정의를 통한 탐색] 계단 오르기 1-1
//}