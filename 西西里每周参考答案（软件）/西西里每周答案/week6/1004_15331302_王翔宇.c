#include <stdio.h>
#include <string.h>

typedef struct {
    char name[21];
    int ave;
    int class;
    char stuF[2];
    char west[2];
    int essays;
}Std;

int calcReward(Std stu);

int main() {
    int n, i;
    scanf("%d", &n);
    int sumReward = 0, reward = 0, maxReward = 0;
    Std students[n];
    for (i = 0; i < n; i++) {
        scanf("%s%d%d%s%s%d",
            &students[i].name, &students[i].ave, &students[i].class,
            &students[i].stuF, &students[i].west, &students[i].essays);
    }
    Std max = students[0];
    maxReward = calcReward(students[0]);
    for (i = 0; i < n; i++) {
        reward = calcReward(students[i]);
        sumReward += reward;
        if (maxReward < reward) {
            maxReward = reward;
            max = students[i];
        }
    }
    printf("%s\n%d\n%d\n", max.name, maxReward, sumReward);
    return 0;
}

int calcReward(Std stu) {
    int sum = 0;
    if (stu.ave > 80 && stu.essays >= 1) sum += 8000;
    if (stu.ave > 85 && stu.class > 80) sum += 4000;
    if (stu.ave > 90) sum += 2000;
    if (stu.ave > 85 && stu.west[0] == 'Y') sum += 1000;
    if (stu.class > 80 && stu.stuF[0] == 'Y') sum += 850;
    return sum;
}