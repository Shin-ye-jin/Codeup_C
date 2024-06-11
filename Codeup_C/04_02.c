#include<stdio.h>

//int main(void)
//{
//	int year, month;
//	scanf_s("%d %d", &year, &month);
//
//	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//		printf("31");
//	else if (month == 2)
//		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//			printf("29");
//		else
//			printf("28");
//	else
//		printf("30");
//	return 0; // 1214 이 달은 며칠까지 있을까?
//}

//int main(void)
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	if (a  > b - c)
//		printf("do not advertise");
//	else if (b - c > a )
//		printf("advertise");
//	else
//		printf("does not matter");
//
//	return 0; // 1216 컨설팅 회사
//}

//int main(void)
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	if (a + b <= c)
//		printf("삼각형아님");
//	else if (a == b && b==c && c==a)
//		printf("정삼각형");
//	else if (a == b || b == c || a == c)
//		printf("이등변삼각형");
//	else if (a * a + b * b == c * c)
//		printf("직각삼각형");
//	else
//		printf("삼각형");
//
//	return 0; // 1218 삼각형 판단하기
//}