#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//long long int f(long long int n) {
//
//	if (n<= 1) return 1; // ���ϸ� �ð��ʰ� �߻�
//	else {
//		return n * f(n - 1);
//	}
//}
//
//int main(void)
//{
//	long long int n, k, tmp, result;
//	scanf("%lld %lld", &n, &k);
//
//	tmp = n - k;
//
//	result = f(tmp + 1) / (f(k) * f(tmp + 1 - k)); // n=4, k=2 �̸� ������ 3����!
//	printf("%lld", result);
//
//	return 0; // 2652 ���� �¼� ��ġ 2
//}

//#include<math.h>
//
//int temp1, temp2;
//
//int main(void)
//{
//	int n, n2, i, j, tmp, cnt = 0, result = 0;
//	scanf("%d", &n);
//
//	tmp = pow(2, n);
//	temp1 = 2;
//
//	for (i = 0; i < tmp; i++) { // ���� �������� ���� �������� 0�ΰ�?
//		n2 = i;
//		for (j = 0; j < n; j++) {
//			temp2 = n2 % 2;
//			if (temp1 == 0 && temp2 == 0) cnt++;
//			temp1 = n2 % 2;
//			n2 = n2 / 2;
//		}
//		if (cnt < 1) result++;
//		temp1 = 2;
//		cnt = 0;
//	}
//
//	printf("%d", result);
//	return 0; // 2653 ��Ģ�� �´� ������ ���鰡 (Small)
//}