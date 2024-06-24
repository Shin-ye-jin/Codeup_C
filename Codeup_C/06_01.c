#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int n, i = 2, j = 0;
//	int a[100] = { 0 };
//	scanf("%d", &n);
//
//	if (n < 6) {
//		printf("wrong number\n");
//	}
//	else {
//		while (i < n) {
//			if (n % i == 0) {
//				if (i == 4) {
//					j = 0;
//					printf("wrong number\n");
//					break;
//				}
//				else {
//					a[j] = i;
//					j++;
//				}
//			}
//			i++;
//		}
//		if (j != 0) {
//			for (i = 0; i < j; i++) {
//				printf("%d ", a[i]);
//			}
//		}
//		else {
//			printf("wrong number");
//		}
//	}
//	
//	return 0; // 1284 암호 해독
//}

//int main(void) {
//	int num,sum=0;
//	char count;
//	scanf("%d", &num);
//
//	sum = num;
//	while (1) {
//		scanf("%c", &count);
//		if (count == '=') {
//			break;
//		}
//
//		scanf("%d", &num);
//		if (count == '+')
//			sum += num;
//		else if (count == '-')
//			sum -= num;
//		else if (count == '*')
//			sum *= num;
//		else
//			sum /= num;
//	}
//	printf("%d", sum);
//	return 0; // 1285 계산기 2
//}

//int main(void) {
//	int num, i, max=-1000000, min=1000000; // 범위 주의
//	
//	for (i = 0; i < 5; i++) {
//		scanf("%d", &num);
//		if (max < num) max = num;
//		if (min > num) min = num;
//	}
//
//	printf("%d\n%d", max, min);
//	return 0; //1286 최댓값, 최솟값
//}