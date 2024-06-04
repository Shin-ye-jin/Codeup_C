#include<stdio.h>

//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//
//	if ((a == 1) || (a == 3) || (a == 5) || (a == 7))
//		printf("oh my god");
//	else
//		printf("enjoy");
//
//	return 0; // 1160 아르바이트 가는 날
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//
//	if (a % 2 == 0)
//		if (b % 2 == 0)
//			printf("짝수+짝수=짝수");
//		else
//			printf("짝수+홀수=홀수");
//	else
//		if (b % 2 == 0)
//			printf("홀수+짝수=홀수");
//		else
//			printf("홀수+홀수=짝수");
//
//	return 0; // 1161 홀수와 짝수 그리고 더하기
//}

//int main(void)
//{
//	int y, m, d;
//	scanf_s("%d %d %d", &y, &m, &d);
//
//	if ((y - m + d)%10 ==0)
//		printf("대박");
//	else
//		printf("그럭저럭");
//
//	return 0; // 1162 당신의 사주를 봐 드립니다 1
//}

//int main(void)
//{
//	int y, m, d;
//	scanf_s("%d %d %d", &y, &m, &d);
//	
//	if ((y + m + d) / 100 % 2 == 0)
//		printf("대박");
//	else
//		printf("그럭저럭");
//
//	return 0; // 당신의 사주를 봐 드립니다 2
//}

//int main(void)
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	if (a > 170 && b > 170 && c > 170)
//		printf("PASS");
//	else
//		printf("CRASH");
//
//	return 0; // 터널 통과하기 1
//}

int main(void)
{
	int time, count;
	scanf_s("%d %d", &time, &count);

	printf("%d", (89 - time) / 5 + 1 + count);
	return 0; // 1165 축구의 신 1
}