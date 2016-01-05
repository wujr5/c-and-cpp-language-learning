/*Copyright 2015 by MarshallRna Wang*/
#include <stdio.h>

int monthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
const char months[13][10] = {"", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
const char Dates[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int calcSrtDate(int targetMonth, int date0);
int isLeapYear(int year);

int main() {
    int year, date0, startDate, i;
    scanf("%d%d", &year, &date0);
    if (isLeapYear(year)) monthDays[2] += 1;
    for (i = 1; i <= 12; i++) {
        startDate = calcSrtDate(i, date0);
        printf("%s 1, %d is %s\n", months[i], year, Dates[startDate]);
    }
}

int isLeapYear(int year) {
    if (year % 400 == 0) return 1;
    else if (year % 100 == 0) return 0;
    else if (year % 4 == 0) return 1;
    return 0;
}

int calcSrtDate(int targetMonth, int date0) {
    int m, sum = 0;
    for (m = 1; m < targetMonth; m++) sum += monthDays[m];
    return (sum + date0) % 7;
}
