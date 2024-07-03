#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int a[1000];
//	int num, i,n;
//	scanf("%d", &n);
//	
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num);
//		a[i] = num;
//	}
//	for (i = n - 1; i >= 0; i--) {
//		printf("%d ", a[i]);
//	}
//	return 0; // 1402 거꾸로 출력하기 3
//}

//int main(void)
//{
//	int n, i, j, num;
//	int a[100];
//	
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num);
//		a[i] = num;
//	}
//	for (i = 0; i < 2; i++) {
//		for (j = 0; j < n; j++) {
//			printf("%d\n", a[j]);
//		}
//	}
//	return 0; // 1403 배열 두번 출력하기
//}

//int main(void)
//{
//	int n, i, j,z, num;
//	int a[1000];
//	
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num);
//		a[i] = num;
//	}
//
//	int index = 0;
//	for (z = 0; z < n; z++) {
//		index = z;
//		for (j = 0; j < n; j++) {
//			printf("%d ", a[index]);
//			index++;
//			if (index == n)
//				index = 0;
//		}
//		printf("\n");
//	}
//	return 0; //1405 숫자 로테이션
//}