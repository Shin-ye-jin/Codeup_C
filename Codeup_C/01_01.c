#include<stdio.h>

// ����1. ��¹�
// 
//int main(void)
//{
//	printf("codeup c\n"); // start
//
//	printf("hello, world!\n"); // 1101 Hello,World!
//
//	printf("hello,\nworld!\n"); // 1102 Hello,World!(�ٹٲ�)
//
//	printf("\"c:\\test\"\n"); // 1103 ������ ���
//
//	printf("special characters\n");
//	printf("[\\n,\\\",\\\\] is very important."); // 1731 Ư�� ���� ���� ����ϱ�
//
//	return 0;
//}

// ����2. ����¹� �� ������
//
//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//	// printf("%d", a);  // 1110 ���� �׷��� ����ϱ�
//
//	// printf("%d%%", a); // 1111 % ���
//
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d %d", a, b); // 1112 �� ���� ���
//
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d %d", b, a); // 1113 �ٲ㼭 ����ϱ�
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d", a + b);
//	return 0; // 1114 �� ������ ����
//}

//int main(void)
//{
//	long long int a, b;
//	scanf_s("%lld %lld", &a, &b);
//	printf("%lld", a + b); // 1115 �� ������ ����(64��Ʈ)
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d+%d=%d\n", a, b, a + b);
//	printf("%d-%d=%d\n", a, b, a - b);
//	printf("%d*%d=%d\n", a, b, a * b);
//	printf("%d/%d=%d\n", a, b, a / b);  // 1116 ��Ģ���� ����
//	return 0;
//}

//int main(void)
//{
//	float a, b;
//	scanf_s("%f %f", &a, &b);
//	printf("%.2f", a * b); // 1117 �� �Ǽ��� ��
//	return 0;
//}

//int main(void)
//{
//	float a, b, w;
//	scanf_s("%f %f", &a, &b);
//	w = a * b / 2;
//	printf("%.1f", w); // 1118 �ﰢ���� ���� ���ϱ�
//	return 0;
//}

//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//	printf("%d", a * 24); // 1119 ���� �ð����� ��ȯ
//	return 0;
//}

//int main(void)
//{
//	int a, b, c;
//	float avg = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//	avg = (float)(a + b + c) / 3.0;
//	printf("%.2f", avg); // 1120 ������ ���
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d", a % b); // 1121 ������ ���ϱ�
//	return 0;
//}

//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//	printf("%d %d", a / 60, a % 60); // 1122 �ʸ� ��/�ʷ� ��ȯ
//	return 0;
//}

//int main(void)
//{
//	int a;
//	float f;
//	scanf_s("%d", &a);
//	f = (float) 9 / 5 * a + 32;
//	printf("%.3f", f); // 1123 ���� �µ��� ȭ�� �µ��� ��ȯ
//	return 0;
//}

//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//	printf("%o %X", a, a); // 1125 8���� 16���� ��ȯ
//	return 0;
//}