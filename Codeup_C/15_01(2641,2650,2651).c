#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int cnt; // ����� ��
//int N; // �Է� ��
//
//void f(int n, int t)
//{
//	if (t > 0) t--; // 3����� �ö��� �� �� �� ���� �� �� ���
//	if (N == n) cnt++;
//	else if (N > n) // N���� n�� ���� ��
//	{
//		if (t == 0) f(n + 3, 3); // 3����� ���� �� t=3�� �Ͽ� ���� �ش�.
//		f(n + 2, t); // �� ĭ ���� ��
//		f(n + 1, t); // �� ĭ ���� ��
//	}
//}
//
//int main(void)
//{
//	scanf("%d", &N);
//	f(0, 0);
//	printf("%d", cnt);
//
//	return 0; // 2641 ���ٸ��� ��� ������ (Small)
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
//    return 0; // 2650 ������ �����
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
//    return 0; // 2651 ���� �¼� ��ġ 1
//}