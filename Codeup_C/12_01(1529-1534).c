#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//void f() {
//	printf("**");
//	return;
//}
//
//int main() {
//	f();
//	return 0; // 1529 [����-�Լ��ۼ�] �Լ��� **���� ����ϱ�
//}

//char f() {
//	return 'A';
//}
//
//int main() {
//	printf("%c", f());
//	return 0; // 1530 [����-�Լ��ۼ�] �Լ��� ���� A �����ϱ�
//}

//int f() {
//	return 1;
//}
//
//int main() {
//	printf("%d", f());
//	return 0; //1531 [����-�Լ��ۼ�] �Լ��� ���� (int) 1 �����ϱ�
//}

//long long int f() {
//	return -2147483649LL;
//}
//
//int main()
//{
//	printf("%lld", f());
//	return 0; // 1532 [����-�Լ��ۼ�] �Լ��� ����(long long int) -2147483649 �����ϱ�
//}

//float f() {
//	return 3.14f; // �Ǽ��� �������� f�� ���̸� float�� ����� ó���ȴ�.
//}
//
//int main()
//{
//	printf("%f", f());
//	return 0; // 1533 [����-�Լ��ۼ�] �Լ��� �Ǽ�(float) 3.14 �����ϱ�
//}


//double f()
//{
//	return 3.1415926535897;
//}
//
//int main()
//{
//	printf("%.13lf", f());
//	return 0; // 1534 [����-�Լ��ۼ�] �Լ��� �Ǽ�(double) 3.1415926535897 �����ϱ�
//}