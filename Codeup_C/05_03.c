#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int i, n, k, result = 1;
//	scanf("%d %d", &n, &k);
//
//	for (i = 0; i < k; i++) {
//		result = result * n;
//	}
//	printf("%d", result);
//	return 0; //1275 K 제곱 구하기
//}

//int main(void)
//{
//	int n, i, result = 1;
//	scanf("%d", &n);
//	
//	for (i = n; i>0; i--) {
//		result = result * i;
//	}
//	printf("%d", result);
//	return 0; // 1276 팩토리얼 계산
//}

//int main(void) {
//	int n, i, num;
//	scanf("%d", &n);
//	
//	if (n == 1) {
//		scanf("%d", &num);
//		printf("%d %d %d", num, num, num);
//	}
//	else {
//		for (i = 1; i <= n; i++) {
//			scanf("%d", &num);
//			if (i == 1 || i == (n + 1) / 2 || i == n) {
//				printf("%d ", num);
//			}
//		}
//	}
//	
//	return 0; // 1277 몇 번째 데이터 출력하기
//}