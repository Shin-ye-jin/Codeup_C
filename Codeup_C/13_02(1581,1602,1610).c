#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void myswap(int* a, int* b)
//{
//	int temp = 0;
//
//	if (*a > *b)
//	{
//		temp = *a;
//		*a = *b;
//		*b = temp;
//	}
//}
//
//main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	myswap(&a, &b);
//	printf("%d %d", a, b);
//	// 1581 : (�Լ� �ۼ� + ������) swap �Լ� ����� (Call by Reference)
//}

//double f(double a)
//{
//	if (a < 0)
//		return a * (-1);
//	else
//		return a;
//}
//
//int main(void)
//{
//	double n;
//	scanf("%lf", &n);
//	printf("%.10g", f(n)); // %g 0�� ��µ��� ����
//
//	return 0; // 1602 ���밪 �Լ�
//}


//char* mysubstr(char* str, int start, int count)
//{
//	int i;
//	char s1[1000];
//
//	for (i = start; i < start+count; i++) {
//		s1[i] = str[i];
//	}
//	s1[i] = '\0'; // ���ڿ��� ���� �ǹ���
//
//	return &s1[start];
//}
//
//int main(void)
//{
//	char str[101];
//	int a, b;
//
//	scanf("%s", str);
//	scanf("%d %d", &a, &b);
//	printf("%s", mysubstr(str, a, b));
//	return 0; // 1610 ���� ��Ʈ�� - ������
//}

//#include<stdlib.h>
//
//char* mysubstr(char* str, int start, int count)
//{
//	char* c = (char*)malloc(count);
//	memset(c, 0, count);
//
//	int cnt = 0, i;
//	
//	for (i = start;i < count + start; i++)
//	{
//		c[cnt] = str[i];
//		cnt++;
//	}
//	c[cnt] = '\0';
//
//	return c;
//}
//
//int main(void)
//{
//	char str[100];
//	int start, count;
//
//	scanf("%s", str);
//	scanf("%d %d", &start, &count);
//	printf("%s", mysubstr(str, start, count));
//	return 0; // 1610
//}