#include<stdio.h>

// ����1. ��¹�
// 
//int main(void)
//{
//	printf("codeup c\n"); // start
//
//	printf("hello, world!\n"); // 1101
//
//	printf("hello,\nworld!\n"); // 1102
//
//	printf("\"c:\\test\"\n"); // 1103
//
//	printf("special characters\n");
//	printf("[\\n,\\\",\\\\] is very important."); // 1731
//
//	return 0;
//}

// ����2. ����¹� �� ������
//
//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//	// printf("%d", a);  // 1110
//
//	// printf("%d%%", a); // 1111
//
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d %d", a, b); // 1112
//
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d %d", b, a); // 1113
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d", a + b);
//	return 0; // 1114
//}

//int main(void)
//{
//	long long int a, b;
//	scanf_s("%lld %lld", &a, &b);
//	printf("%lld", a + b); // 1115
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d+%d=%d\n", a, b, a + b);
//	printf("%d-%d=%d\n", a, b, a - b);
//	printf("%d*%d=%d\n", a, b, a * b);
//	printf("%d/%d=%d\n", a, b, a / b);  // 1116
//	return 0;
//}

//int main(void)
//{
//	float a, b;
//	scanf_s("%f %f", &a, &b);
//	printf("%.2f", a * b); // 1117
//	return 0;
//}

//int main(void)
//{
//	float a, b, w;
//	scanf_s("%f %f", &a, &b);
//	w = a * b / 2;
//	printf("%.1f", w); // 1118
//	return 0;
//}

int main(void)
{
	int a;
	scanf_s("%d", &a);
	printf("%d", a * 24); // 1119
	return 0;
}