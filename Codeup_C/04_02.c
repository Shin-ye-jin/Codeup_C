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
//	return 0; // 1214 �� ���� ��ĥ���� ������?
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
//	return 0; // 1216 ������ ȸ��
//}

//int main(void)
//{
//	int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	if (a + b <= c)
//		printf("�ﰢ���ƴ�");
//	else if (a == b && b==c && c==a)
//		printf("���ﰢ��");
//	else if (a == b || b == c || a == c)
//		printf("�̵�ﰢ��");
//	else if (a * a + b * b == c * c)
//		printf("�����ﰢ��");
//	else
//		printf("�ﰢ��");
//
//	return 0; // 1218 �ﰢ�� �Ǵ��ϱ�
//}

//int main(void)
//{
//	int a, b, c, count = 0;
//	scanf_s("%d %d %d", &a, &b, &c);
//
//	count = (89 - a) / 5 + 1;
//	if (count + b > c)
//		printf("win");
//	else if (count + b == c)
//		printf("same");
//	else
//		printf("lose");
//
//	return 0; // 1222 �౸�� �� 2
//}

//int main(void)
//{
//	float a, b, c, d;
//	scanf_s("%f %f %f %f", &a, &b, &c, &d);
//
//	if (a / b > c / d)
//		printf(">");
//	else if (a / b == c / d)
//		printf("=");
//	else
//		printf("<");
//
//	return 0; // �м� ũ�� ��
//}

//int main(void)
//{
//	int a, b, c, d, e, f, g;
//	int num1, num2, num3, num4, num5, num6;
//	int count = 0, bonus = 0;
//	scanf_s("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
//	scanf_s("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);
//
//	if (num1 == a || num1 == b || num1 == c || num1 == d || num1 == e || num1 == f)
//		count += 1;
//	if (num2 == a || num2 == b || num2 == c || num2 == d || num2 == e || num2 == f)
//		count += 1;
//	if (num3 == a || num3 == b || num3 == c || num3 == d || num3 == e || num3 == f)
//		count += 1;
//	if (num4 == a || num4 == b || num4 == c || num4 == d || num4 == e || num4 == f)
//		count += 1;
//	if (num5 == a || num5 == b || num5 == c || num5 == d || num5 == e || num5 == f)
//		count += 1;
//	if (num6 == a || num6 == b || num6 == c || num6 == d || num6 == e || num6 == f)
//		count += 1;
//	if (num1 == g || num2 == g || num3 == g || num4 == g || num5 == g || num6 == g)
//		bonus += 1;
//
//	if (count == 6)
//		printf("1");
//	else if (count == 5 && bonus == 1)
//		printf("2");
//	else if (count == 5)
//		printf("3");
//	else if (count == 4)
//		printf("4");
//	else if (count == 3)
//		printf("5");
//	else
//		printf("0");
//	
//	return 0;// 1226 �̹� �� �ζ�
//}