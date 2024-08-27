#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//typedef struct student
//{
//    char name[10];
//    int s1;
//    int s2;
//    int s3;
//}STUDENT;
//
//int main() {
//    int i, j, n, max, m2 = 1, m3 = 1;
//    STUDENT s[100];
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf("%s %d %d %d", s[i].name, &s[i].s1, &s[i].s2, &s[i].s3);
//    }
//
//    max = s[0].s1;
//
//    for (i = 1; i < n; i++) {
//        if (max < s[i].s1) {
//            max = s[i].s1;
//        }
//    }
//
//    for (i = 0; i < n; i++) {
//        if (max == s[i].s1) {
//            for (j = 0; j < n; j++) {
//                if (s[i].s2 < s[j].s2) m2++;
//                if (s[i].s3 < s[j].s3) m3++;
//            }
//            printf("%s %d %d", s[i].name, m2, m3);
//            break;
//        }
//    }
//
//    return 0; // 3016 1등한 학생의 성적
//}

//typedef struct schedule
//{
//    char sc[100];
//    int year;
//    int month;
//    int day;
//}SCHEDULE;
//
//int main() {
//    int n, i, j, max;
//    SCHEDULE s[100];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf("%s %d %d %d", s[i].sc, &s[i].year, &s[i].month, &s[i].day);
//    }
//
//    for (i = 0; i < n - 1; i++) {
//        for (j = i + 1; j < n; j++) {
//            if ((s[i].year > s[j].year) ||
//                (s[i].year == s[j].year && s[i].month > s[j].month) ||
//                (s[i].year == s[j].year && s[i].month == s[j].month && s[i].day > s[j].day)) {
//
//                SCHEDULE tmp = s[i];
//                s[i] = s[j];
//                s[j] = tmp;
//            }
//            if (s[i].year == s[j].year && s[i].month == s[j].month && s[i].day == s[j].day) {
//                if (strcmp(s[i].sc, s[j].sc) > 0) {
//                    SCHEDULE tmp2 = s[i];
//                    s[i] = s[j];
//                    s[j] = tmp2;
//                }
//            }
//        }
//    }
//
//    for (i = 0; i < n; i++) {
//        printf("%s\n", s[i].sc);
//    }
//    return 0; // 3019 스케줄 정리
//}

//typedef struct mon
//{
//    char m[100];
//    int number;
//    char name[100];
//}MON;
//
//int main(void)
//{
//    int i, j, n;
//    MON mo[100];
//
//    scanf("%d", &n);
//
//    for (i = 0; i < n; i++) {
//        scanf("%c %d %s", &mo[i].m, &mo[i].number, mo[i].name);
//    }
//
//    return 0; // 3108 정올 참여 학생 리스트 만들기 1
//}