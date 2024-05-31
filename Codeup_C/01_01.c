#include<stdio.h>

// 기초1. 출력문
// 
//int main(void)
//{
//	printf("codeup c\n"); // start
//
//	printf("hello, world!\n"); // 1101 Hello,World!
//
//	printf("hello,\nworld!\n"); // 1102 Hello,World!(줄바꿈)
//
//	printf("\"c:\\test\"\n"); // 1103 폴더명 출력
//
//	printf("special characters\n");
//	printf("[\\n,\\\",\\\\] is very important."); // 1731 특수 서식 문자 출력하기
//
//	return 0;
//}

// 기초2. 입출력문 및 연산자
//
//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//	// printf("%d", a);  // 1110 정수 그래도 출력하기
//
//	// printf("%d%%", a); // 1111 % 출력
//
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d %d", a, b); // 1112 두 정수 출력
//
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d %d", b, a); // 1113 바꿔서 출력하기
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d", a + b);
//	return 0; // 1114 두 정수의 덧셈
//}

//int main(void)
//{
//	long long int a, b;
//	scanf_s("%lld %lld", &a, &b);
//	printf("%lld", a + b); // 1115 두 정수의 덧셈(64비트)
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d+%d=%d\n", a, b, a + b);
//	printf("%d-%d=%d\n", a, b, a - b);
//	printf("%d*%d=%d\n", a, b, a * b);
//	printf("%d/%d=%d\n", a, b, a / b);  // 1116 사칙연산 계산기
//	return 0;
//}

//int main(void)
//{
//	float a, b;
//	scanf_s("%f %f", &a, &b);
//	printf("%.2f", a * b); // 1117 두 실수의 곱
//	return 0;
//}

//int main(void)
//{
//	float a, b, w;
//	scanf_s("%f %f", &a, &b);
//	w = a * b / 2;
//	printf("%.1f", w); // 1118 삼각형의 넓이 구하기
//	return 0;
//}

//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//	printf("%d", a * 24); // 1119 일을 시간으로 변환
//	return 0;
//}

//int main(void)
//{
//	int a, b, c;
//	float avg = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	avg = (float)(a + b + c) / 3.0;
//	printf("%.2f", avg); // 1120 세수의 평균
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d", a % b); // 1121 나머지 구하기
//	return 0;
//}

//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//	printf("%d %d", a / 60, a % 60); // 1122 초를 분/초로 변환
//	return 0;
//}

//int main(void)
//{
//	int a;
//	float f;
//	scanf_s("%d", &a);
//	f = (float) 9 / 5 * a + 32;
//	printf("%.3f", f); // 1123 섭씨 온도를 화씨 온도로 변환
//	return 0;
//}

//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//	printf("%o %X", a, a); // 1125 8진수 16진수 변환
//	return 0;
//}