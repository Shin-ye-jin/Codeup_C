#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int n, i, j, max = 0, temp, k, number = 1;
//	int num[1001][2] = { 0 };
//	int count[1001] = { 0 };
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d %d", &num[i][0], &num[i][1]);
//	}
//
//	for (i = 0; i < n; i++) {
//		count[i] = num[i][0];
//	}
//
//	for (i = 0; i < n - 1; i++) {
//		for (j = 0; j < n - 1 - i; j++) {
//			if (count[j] > count[j + 1]) {
//				temp = count[j];
//				count[j] = count[j + 1];
//				count[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = n - 1; i >= 0; i--) {
//		for (j = 0; j < n; j++) {
//			if (count[i] == num[j][0]) {
//				printf("%d %d %d\n", number, num[j][0], num[j][1]);
//				number++;
//			}
//		}
//	}
//
//	return 0;	 
//}