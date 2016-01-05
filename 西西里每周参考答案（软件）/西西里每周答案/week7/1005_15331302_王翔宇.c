/*Copyright 2015 by MarshallRna Wang*/
#include <stdio.h>

int monthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const char months[13][10] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
const char Dates[7][4] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

void prtCalendar(int year, int targetMonth, int startDate);
void prtDates();
void prtSpaces();
int calcSrtDate(int targetMonth, int date0);
int isLeapYear(int year);

int main() {
    int year, date0, targetMonth, startDate;
    scanf("%d%d%d", &year, &date0, &targetMonth);
    if (isLeapYear(year)) monthDays[2] += 1;
    startDate = calcSrtDate(targetMonth, date0);
    prtCalendar(year, targetMonth, startDate);
    if (calcSrtDate(targetMonth + 1, date0) !=  0) printf("\n");// puts("");
    //这里对于特殊情况下的换行逻辑存在漏洞
    //漏洞在于如果输出的是12月，而且那个12月的31号是sat的话，就不会换行
    return 0;
}

void prtCalendar(int year, int targetMonth, int startDate) {
    printf("%s %d\n", months[targetMonth], year);
    prtDates();
    int i;
    for (i = 0; i < startDate; i++) prtSpaces();
    i = 1;
    while (i <= monthDays[targetMonth]) {
        printf("%8d", i);
        if ((i + startDate) % 7 == 0) printf("\n");
        i++;
    }
}

int calcSrtDate(int targetMonth, int date0) {
    int m, sum = 0;
    for (m = 1; m < targetMonth; m++) sum += monthDays[m];
    return (sum + date0) % 7;
}

void prtDates() {
    int q;
    for (q = 0; q < 7; q++)
        printf("%8s", Dates[q]);
    printf("\n");
}

void prtSpaces() {
    printf("        ");
}

int isLeapYear(int year) {
    if (year % 400 == 0) return 1;
    else if (year % 100 == 0) return 0;
    else if (year % 4 == 0) return 1;
    return 0;
}
