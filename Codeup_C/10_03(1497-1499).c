#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main() {
//    int n, i;
//    int num[101];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    for (i = 0; i < n - 1; i += 2) {
//        if (num[i] < num[i + 1]) {
//            printf("%d ", num[i + 1]);
//        }
//        else {
//            printf("%d ", num[i]);
//        }
//    }
//    printf("\n");
//    return 0; // 1497 [기초-배열연습] 두 개씩 묶어 큰 값 골라 배열 만들기 5-6
//}

//int main() {
//    int n, g, i, j, result = 0, temp,k,count=0;
//    int num[100];
//
//    scanf("%d %d", &n, &g);
//
//    for (i = 0; i < n; i++) {
//        scanf("%d", &num[i]);
//    }
//
//    if (n % g == 0) {
//        for (i = 0; i < n / g; i++) {
//            for (k = i * g; k < (i + 1) * g - 1; k++) {
//                for (j = i * g; j < (i + 1) * g - 1-count; j++) {
//                    if (num[j] > num[j + 1]) {
//                        temp = num[j];
//                        num[j] = num[j + 1];
//                        num[j + 1] = temp;
//                    }
//                }
//                count++;
//            }
//            count = 0;
//            printf("%d ", num[i * g]);
//        }
//    }
//    else {
//        for (i = 0; i < n / g + 1; i++) {
//            for (k = i * g; k < (i + 1) * g - 1; k++) {
//                if ((i*g) != n - 2) {
//                    for (j = i * g; j < (i + 1) * g - 1 - count; j++) {
//                        if (num[j] > num[j + 1]) {
//                            temp = num[j];
//                            num[j] = num[j + 1];
//                            num[j + 1] = temp;
//                        }
//                    }
//                    count++;
//                }
//                else {
//                    if (num[j] > num[j + 1]) {
//                        temp = num[j];
//                        num[j] = num[j + 1];
//                        num[j + 1] = temp;
//                    }
//                }
//                
//            }
//            count = 0;
//            printf("%d ", num[i * g]);
//        }
//    }
//    return 0;
//}

//int main(void)
//{
//	int num[101];
//	int n, g, i, j, min;
//	scanf("%d %d", &n, &g);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < n; i += g) { // g개씩 비교
//		min = num[i];
//		for (j = i; j < i + g; j++) {
//			if (j < n) { // 해당 범위 이내일 경우
//				if (min > num[j]) {
//					min = num[j];
//				}
//			}
//		}
//		printf("%d ", min);
//	}
//
//	return 0; //1498 [기초-배열연습] 여러 개씩 묶어 작은 값 골라 배열 만들기 5-7
//}

//int main(void)
//{
//	int num[101];
//	int n, g, i, j, max;
//	scanf("%d %d", &n, &g);
//
//	for (i = 0; i < n; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < n; i += g) {
//		max = num[i];
//		for (j = i; j < i + g; j++) {
//			if (j < n) {
//				if (max < num[j]) {
//					max = num[j];
//				}
//			}
//		}
//		printf("%d ", max);
//	}
//	return 0; // 1499 [기초-배열연습] 여러 개씩 묶어 큰 값 골라 배열 만들기 5-8
//}
