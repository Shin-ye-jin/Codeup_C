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

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d %d", b, a); // 1113
	return 0;
}