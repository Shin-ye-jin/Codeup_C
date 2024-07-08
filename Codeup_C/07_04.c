#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main(void)
//{
//	int n, i, j;
//	char name[100][100]; // 문자열인 경우 2차원 배열
//	int num[100];
//	int rank[100];
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%s", name[i]);
//		scanf("%d", &num[i]);
//		rank[i] = 1;
//	}
//	
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++) {
//			if (num[i] < num[j]) {
//				rank[i]++; // 숫자가 높을수록 뒷 순위
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++) {
//		if (rank[i] == 3) {
//			printf("%s", name[i]);
//		}
//	}
//
//
//	return 0; //1420 3등 찾기
//}

//int main(void)
//{
//	int n, c, i, j, temp;
//	int height[100];
//	scanf("%d %d", &n, &c);
//
//	for (i = 1; i <= n; i++) {
//		scanf("%d", &height[i]);
//	}
//	
//	for (i = 1; i < n; i++) { // 버블 정렬
//		for (j = i+1; j <= n; j++) {
//			if (height[i] > height[j]) {
//				temp = height[i];
//				height[i] = height[j];
//				height[j] = temp;
//			}
//		}
//	}
//
//	for (i = 1; i <= n; i++) {
//		if (i % c == 0) {
//			printf("%d \n", height[i]);
//		}
//		else {
//			printf("%d ", height[i]);
//		}
//	}
//	return 0; //1425 자리 배치
//}

//int main(void)
//{
//	int n, i, j;
//	int num[1001];
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < n; i++) {
//		printf("%d: ", i + 1);
//		for (j = 0; j < n; j++) {
//			if (i != j) {
//				if (num[i] < num[j]) {
//					printf("< ");
//				}
//				if (num[i] > num[j]) {
//					printf("> ");
//				}
//				if (num[i] == num[j]) {
//					printf("= ");
//				}
//			}
//		}
//		printf("\n");
//	}
//	return 0; //1440 비교
//}