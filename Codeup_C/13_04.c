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
//	return 0; // 1805 입체기동장치 생산공장
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
//	STUDENT student[100]; // 구조체 선언
//
//	scanf("%d %d", &n, &m); 
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s %d", student[i].name, &student[i].score);
//		student[i].num = i; // 입력 받은 순서
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
//	return 0; // 3015 성적표 출력
//}