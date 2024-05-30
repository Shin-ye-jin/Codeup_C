#include<stdio.h>

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d", a & b); // 1143
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d", a | b); //1144
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d", a << b); // 1147
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	printf("%d", a >> b); // 1148
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//	if (a > b)
//		printf("%d", a);
//	else
//		printf("%d", b); // 1149
//	return 0;
//}

int main(void)
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
		if (b > c)
			printf("%d", c);
		else
			printf("%d", b);
	else if (a > c)
		if (c > b)
			printf("%d", b);
		else
			printf("%d", c);
	else
		if (c > a)
			printf("%d", a);
		else
			printf("%d", c); // 1150
	return 0;
}