#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//#define N 100000
//
//int num[N];
//int main(void)
//{
//	int n, temp, max = 0,i,j;
//	
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &temp);
//		num[temp]++;
//		if (temp > max)
//			max = temp;
//	}
//
//	for (i = 0; i <= max; i++) {
//		if (num[i] > 0) {
//			for (j = 0; j < num[i]; j++) {
//				printf("%d ", i);
//			}
//		}
//	}
//
//	return 0; // 3014 정렬을 빠르게!
//}

//int count[500001] = { 0 };
//int num_list[50001] = { 0 }; 
//// 전역배열선언 : int 형 약 20만개 가능
//int main(void)
//{
//	int n, i;
//	int num = 0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num_list[i]);
//		num = num_list[i];
//		count[num] += 1;
//	}
//
//	for (i = 0; i < 500000; i++) {
//		count[i + 1] += count[i];
//	}
//
//	for (i = 0; i < n; i++) {
//		printf("%d ", count[num_list[i]] - 1);
//	}
//	return 0; // 3004 데이터 재정렬 
//}

//int main(void)
//{
//	int num[1001] = { 0 };
//	int n, i, j, count = 0, number = 0, temp;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < n - 1; i++) {
//		for (j = 0; j < n - 1 - i; j++) {
//			if (num[j] > num[j + 1]) {
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//				count++;
//			}
//		}
//		if (count != 0) {
//			number++;
//		}
//		count = 0;
//	}
//
//	printf("%d", number);
//
//	return 0; // 3011 거품 정렬(Bubble Sort)
//}