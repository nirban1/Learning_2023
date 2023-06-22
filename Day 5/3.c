#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTime() {
    struct Time t;

    printf("Enter hours: ");
    scanf("%d", &t.hours);

    printf("Enter minutes: ");
    scanf("%d", &t.minutes);

    printf("Enter seconds: ");
    scanf("%d", &t.seconds);

    return t;
}

void printTime(struct Time t) {
    printf("%02d:%02d:%02d\n", t.hours, t.minutes, t.seconds);
}

struct Time differenceBetweenTime(struct Time t1, struct Time t2) {
    struct Time diff;

    int seconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int seconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int difference = seconds1 - seconds2;

    diff.hours = difference / 3600;
    difference %= 3600;
    diff.minutes = difference / 60;
    diff.seconds = difference % 60;

    return diff;
}

int main() {
    struct Time time1, time2;

    printf("Enter time 1:\n");
    time1 = getTime();

    printf("Enter time 2:\n");
    time2 = getTime();

    printf("\nTime 1: ");
    printTime(time1);

    printf("Time 2: ");
    printTime(time2);

    struct Time diff = differenceBetweenTime(time1, time2);

    printf("\nDifference: ");
    printTime(diff);

    return 0;
}
