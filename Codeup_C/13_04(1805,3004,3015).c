#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int num[101] = { 0 };
//
//int main(void)
//{
//	int n, i, a, b;
//	
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d %d", &a, &b);
//		num[a] = b+1;
//	}
//
//	for (i = 1; i <= 100; i++) {
//		if(num[i]!=0)
//			printf("%d %d\n", i, num[i]-1);
//	}
//
//	return 0; // 1805 ��ü�⵿��ġ �������
//}

//typedef struct student
//{
//	char name[10];
//	int score;
//	int num;
//}STUDENT;
//
//int main(void)
//{
//	int i, j, n, m;
//	STUDENT student[100]; // ����ü ����
//
//	scanf("%d %d", &n, &m); 
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d", student[i].name, &student[i].score);
//		student[i].num = i; // �Է� ���� ����
//	}
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (student[i].score < student[j].score ||
//				(student[i].score == student[j].score && student[i].num > student[j].num)) {
//
//				STUDENT temp = student[i];
//				student[i] = student[j];
//				student[j] = temp;
//			}
//		}
//	}
//
//	for (i = 0; i < m; i++) {
//		printf("%s\n", student[i].name);
//	}
//
//	return 0; // 3015 ����ǥ ���
//}

//typedef struct student
//{
//	char name[10];
//	int score1;
//	int score2;
//	int score3;
//	int num1;
//	int num2;
//}STUDENT;
//
//int main(void)
//{
//	int i, j, n;
//	STUDENT student[100]; // ����ü ����
//
//	scanf("%d %d", &n); 
//
//	for (i = 0; i < n; i++){
//		scanf("%s %d %d %d", student[i].name, &student[i].score1, &student[i].score2, &student[i].score3);
//	}
//
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			if (student[i].score1 < student[j].score1){
//				STUDENT temp = student[i];
//				student[i] = student[j];
//				student[j] = temp;
//			}
//		}
//	}
//
//	printf("%s\n", student[0].name);
//
//	return 0; // 3016 1���� �л��� ����
//}