#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void) {
//	int a, b, sum = 0,i;
//	scanf("%d %d", &a, &b);
//
//	if (a % 2 == 1) {
//		sum += a;
//		printf("%d", a);
//	}
//	else {
//		sum -= a;
//		printf("-%d", a);
//	}
//
//	for (i = a + 1; i <= b; i++) {
//		if (i % 2 == 1) {
//			sum += i;
//			printf("+%d", i);
//		}
//		else {
//			sum -= i;
//			printf("-%d", i);
//		}
//	}
//
//	printf("=%d", sum);
//	return 0; // 1281 Ȧ���� ���ϰ� ¦���� ���� 3
//}

//int main(void)
//{
//	int n, i=0;
//	scanf("%d", &n);
//	while (1) {
//		i++;
//		if (n >= i * i && n < (i + 1) * (i + 1)) { // ������ ���̿� �ִ��� Ȯ���ϴ� ����
//			printf("%d %d", n - i * i, i);
//			break;
//		}
//	}
//	return 0; // 1282 ������ �����
//}

//int main(void)
//{
//	float n, num, data, result = 0;
//	int i;
//	scanf("%f", &n);
//	scanf("%f", &num);
//	result = n;
//	for (i = 0; i < num; i++) {
//		scanf("%f", &data);
//		n = n + (n * data * 0.01);
//	}
//	result = result - n;
//	if (result > 0) {
//		printf("-%.0f\n", result);
//		printf("bad");
//	}
//	else if (result < 0) {
//		result = result * (-1);
//		printf("%.0f\n", result);
//		printf("good");
//	}
//	else {
//		printf("%.0f\n", result);
//		printf("same");
//	}
//	return 0; //1283 �ֽ� ����
//}