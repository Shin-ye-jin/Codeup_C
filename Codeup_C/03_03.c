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
//	return 0; // 1160 �Ƹ�����Ʈ ���� ��
//}

//int main(void)
//{
//	int a, b;
//	scanf_s("%d %d", &a, &b);
//
//	if (a % 2 == 0)
//		if (b % 2 == 0)
//			printf("¦��+¦��=¦��");
//		else
//			printf("¦��+Ȧ��=Ȧ��");
//	else
//		if (b % 2 == 0)
//			printf("Ȧ��+¦��=Ȧ��");
//		else
//			printf("Ȧ��+Ȧ��=¦��");
//
//	return 0; // 1161 Ȧ���� ¦�� �׸��� ���ϱ�
//}

//int main(void)
//{
//	int y, m, d;
//	scanf_s("%d %d %d", &y, &m, &d);
//
//	if ((y - m + d)%10 ==0)
//		printf("���");
//	else
//		printf("�׷�����");
//
//	return 0; // 1162 ����� ���ָ� �� �帳�ϴ� 1
//}

//int main(void)
//{
//	int y, m, d;
//	scanf_s("%d %d %d", &y, &m, &d);
//	
//	if ((y + m + d) / 100 % 2 == 0)
//		printf("���");
//	else
//		printf("�׷�����");
//
//	return 0; // ����� ���ָ� �� �帳�ϴ� 2
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
//	return 0; // �ͳ� ����ϱ� 1
//}

int main(void)
{
	int time, count;
	scanf_s("%d %d", &time, &count);

	printf("%d", (89 - time) / 5 + 1 + count);
	return 0; // 1165 �౸�� �� 1
}