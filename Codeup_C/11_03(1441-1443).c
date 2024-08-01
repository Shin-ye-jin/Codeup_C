#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int a[10001];
//int n, i, j, temp, min, key;

//int main(void)
//{
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j <= n- 1; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//
//	for (i = 1; i <= n; i++)
//		printf("%d\n", a[i]);
//	return 0; // 1441 버블 정렬
//}

//int main(void)
//{
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	for (i = 1; i < n; i++) {
//		min = i;
//		for (j = i + 1; j <= n; j++) {
//			if (a[j] < a[min]) {
//				min = j;
//			}
//		}
//		temp = a[i];
//		a[i] = a[min];
//		a[min] = temp;
//	}
//	for (i = 1; i <= n; i++)
//		printf("%d\n", a[i]);
//	return 0; // 1442 선택 정렬
//}

//int main(void)
//{
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//	for (i = 2; i <= n; i++)
//	{
//		key = a[i];
//		for (j = i - 1; j >= 0 && a[j] > key; j--) 
//		{
//			a[j + 1] = a[j];
//		}
//		
//		a[j + 1] = key;
//	}
//
//	for (i = 1; i <= n; i++)
//		printf("%d\n", a[i]);
//	return 0; // 1443 삽입정렬
//}