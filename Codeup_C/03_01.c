#include<stdio.h>

//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//	if (a < 10)
//		printf("small");
//	else
//		printf("");
//	return 0; // 1151 10보다 작은 수
//}

//int main(void)
//{
//	int a;
//	scanf_s("%d", &a);
//	if (a < 10)
//		printf("small");
//	else
//		printf("big");
//	return 0; // 1151 10보다 작은 수 (else 버전)
//}

int main(void)
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a > b)
		printf(">");
	else if (b > a)
		printf("<");
	else if (a == b)
		printf("=");
	return 0; // 1152 두 수의 대소 비교
}