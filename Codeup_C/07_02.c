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
//	return 0; // 1402 �Ųٷ� ����ϱ� 3
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
//	return 0; // 1403 �迭 �ι� ����ϱ�
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
//	return 0; //1405 ���� �����̼�
//}

//int main(void)
//{
//	char a[100];
//	int i, j;
//
//	gets(a);
//	
//	for (i = 0; a[i]!='\0'; i++) {
//		if (a[i] == ' ')
//			continue;
//		else
//			printf("%c", a[i]);
//	}
//
//	return 0; //1407 ���ڿ� ����ϱ� 1
//}

//int main(void)
//{
//	int n, i, j, str;
//	int num[11];
//
//	for (i = 1; i <= 10; i++) {
//		scanf("%d", &num[i]);
//	}
//	scanf("%d", &n);
//	printf("1");
//	printf("%d", num[n]);
//
//	return 0; // 1409 ���� �׽�Ʈ 1
//}

//int main(void)
//{
//	int count1 = 0, count2 = 0, i, j;
//	char a[100001];
//
//	gets(a);
//
//	for (i = 0; a[i] != '\0'; i++) {
//		if (a[i] == '(')
//			count1++;
//		else if (a[i] == ')')
//			count2++;
//	}
//	printf("%d %d", count1, count2);
//	return 0; // 1410 �ùٸ� ��ȣ 1 (��ȣ ���� ����)
//}