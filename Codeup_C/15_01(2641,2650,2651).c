#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int cnt; // 경우의 수
//int N; // 입력 값
//
//void f(int n, int t)
//{
//	if (t > 0) t--; // 3계단을 올랐을 때 두 번 턴을 쉴 때 사용
//	if (N == n) cnt++;
//	else if (N > n) // N보다 n이 작을 때
//	{
//		if (t == 0) f(n + 3, 3); // 3계단을 오를 때 t=3을 하여 턴을 준다.
//		f(n + 2, t); // 두 칸 오를 때
//		f(n + 1, t); // 한 칸 오를 때
//	}
//}
//
//int main(void)
//{
//	scanf("%d", &N);
//	f(0, 0);
//	printf("%d", cnt);
//
//	return 0; // 2641 숏다리의 계단 오르기 (Small)
//}

//int f(int a, int b) {
//    int i;
//    if (a < b) {
//        for (i = a; i >= 1; i--) {
//            if (a % i == 0 && b % i == 0) {
//                return i;
//            }
//        }
//    }
//    else {
//        for (i = b; i >= 1; i--) {
//            if (a % i == 0 && b % i == 0) {
//                return i;
//            }
//        }
//    }
//}
//
//
//int main(void)
//{
//    int a, b, c, temp;
//    scanf("%d %d %d", &a, &b, &c);
//
//    temp = f(a, b);
//    printf("%d", f(c, temp));
//
//    return 0; // 2650 디지털 도어락
//}

//int main(void)
//{
//    long long int n, k, i, result = 1, cnt = 0;
//
//    scanf("%lld %lld", &n, &k);
//
//    for (i = n; i > 1; i--) {
//        cnt += 1;
//        result = result * i;
//        if (cnt == k) break;
//    }
//
//    for (i = k; i >= 1; i--) {
//        result /= i;
//    }
//    printf("%lld", result);
//    return 0; // 2651 극장 좌석 배치 1
//}