#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//
//	if (n == 0) printf("0");
//	else {
//		while (n > 0) {
//			printf("%d", n % 10);
//			n = n / 10;
//		}
//	}
//	return 0; // 1714 숫자 거꾸로 출력하기
//}

//int main(void)
//{
//	int n, i, res;
//	char num[201];
//
//	scanf("%d", &n);
//	scanf("%s", num);
//	res = n % 3;
//
//	for (i = 0; i < n; i++) {
//		if (i > 0 && (i % 3 == res)) {
//			printf(",");
//		}
//		printf("%c", num[i]);
//	}
//	return 0; // 2016 천단위 구분기호
//}

//int main(void)
//{
//	long long int a, b;
//	scanf("%lld", &a);
//	scanf("%lld", &b);
//
//	printf("%lld", a + b);
//	return 0; // 3021 큰 수 덧셈 27
//}

//int main(void)
//{
//	long long int a, b;
//	scanf("%lld", &a);
//	scanf("%lld", &b);
//
//	printf("%lld", a - b);
//	return 0; // 3022 큰 수 뺄셈
//}

//#include <stdlib.h>
//#include <string.h>
//int number(char* s)
//{
//    s = s + 6;
//    char* temp = strchr(s, ' ');
//    temp[0] = '\0';
//    return atoi(s);
//}
//
//int main() {
//    int n;
//    char cmd[200][13];
//    int stack[200] = { 0 };
//    int cnt = 0;
//
//    scanf("%d", &n);
//
//    for (int i = 0; i < n; i++) {
//        scanf(" %[^\n]s", cmd[i]);
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (strncmp(cmd[i], "push", 4) == 0) {
//            stack[cnt++] = number(cmd[i]);
//        }
//        else if (strncmp(cmd[i], "top", 3) == 0) {
//            if (cnt == 0) printf("-1\n");
//            else printf("%d\n", stack[cnt - 1]);
//        }
//        else if (strncmp(cmd[i], "pop", 3) == 0 && cnt > 0) cnt--;
//        else if (strncmp(cmd[i], "size", 4) == 0) printf("%d\n", cnt);
//        else if (strncmp(cmd[i], "empty", 5) == 0)
//        {
//            if (cnt == 0) printf("true\n");
//            else printf("false\n");
//        }
//    }
//    return 0; // 3102 STL stack
//}

//int stack[100000];
//int cnt = 0, sum = 0;
//
//void push(int n) {
//    if (cnt < 100000) {
//        stack[cnt] = n;
//        sum += stack[cnt];
//        cnt++;
//    }
//}
//
//void pop() {
//    if (cnt != 0) {
//        cnt--;
//        sum -= stack[cnt];
//        stack[cnt] = 0;
//    }
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    int arr[n];
//
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//        if (arr[i] == 0) {
//            pop();
//        }
//        else {
//            push(arr[i]);
//        }
//    }
//    printf("%d\n", sum);
//    return 0; // 3117 0은 빼!
//}