#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int num[10001] = { 1,1 };
//
//int f(int n)
//{
//    if (n == 1) return 1;
//    else if (num[n] == 0) {
//        return num[n] = (f(n - 2) * 2 + f(n - 1)) % 100007;
//    }
//    else return num[n];
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d", f(n));
//    return 0; // 3713 블럭 채우기 3
//}

//int num[10001] = { 0,1,5,11, };
//
//int f(int n)
//{
//    if (num[n] == 0) {
//        return num[n] = (f(n - 3) * 2 + f(n - 2) * 4 + f(n - 1)) % 100007;
//    }
//    else return num[n];
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d", f(n));
//    return 0; // 3714 블럭 채우기 4
//}

//int num[10001] = { 0,1,2,6, };
//
//int f(int n)
//{
//    if (num[n] == 0) {
//        return num[n] = (f(n - 2) + f(n - 1) + 3 * f(n - 3)) % 1000;
//    }
//    else return num[n];
//}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%d", f(n));
//    return 0; // 3716 블럭 채우기 5
//}

//int num[10001] = { 0,2,7,22, };
//
//int f(int n)
//{
//	if (num[n] != 0) return num[n];
//	
//	int sum = 0;
//
//	for (int i = 1; i < n; i++) {
//		if (i == 2) {
//			sum += f(n - i) * 3;
//		}
//		else {
//			sum += f(n - i) * 2;
//		}
//	}
//
//	return num[n] = (sum + 2) % 100007;
//}
//
//int main(void) {
//	int n;
//	scanf("%d", &n);
//	printf("%d", f(n));
//	return 0; // 3719 블럭 채우기 6
//}

//int num[10001] = { 0,0,3, };
//
//int f(int n) {
//	if (num[n] != 0) return num[n];
//
//	if (n % 2 == 1) return num[n] = 0;
//
//	int sum = 0;
//
//	for (int i = 2; i < n - 1; i += 2) {
//		if (i == 2) sum += f(n - i) * 3;
//		else sum += f(n - i) * 2;
//	}
//	return num[n] = (sum + 2) % 100007;
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", f(n));
//	return 0; // 3721 블럭 채우기 7
//}

//int num[10001] = { 0,1,5, };
//
//int f(int n) {
//	if (num[n] != 0) return num[n];
//
//	int sum = 0;
//
//	for (int i = 1; i < n; i++) {
//		if (i == 1) sum += f(n - i);
//		else if (i == 2) sum += f(n - i) * 4;
//		else {
//			if (i % 2 == 0) sum += f(n - i) * 3;
//			else sum += f(n - i) * 2;
//		}
//	}
//
//	return num[n] = (n % 2 == 0) ? (sum + 3) % 100007 : (sum + 2) % 100007;
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", f(n));
//	return 0; // 3728 블럭 채우기 8
//}