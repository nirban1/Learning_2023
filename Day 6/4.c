#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

int compare(const void *a, const void *b) {
    struct Student *s1 = (struct Student *)a;
    struct Student *s2 = (struct Student *)b;

    return s2->marks - s1->marks;
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[50];

    for (int i = 0; i < n; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].marks);
    }

    qsort(students, n, sizeof(struct Student), compare);

    printf("Students sorted by marks in descending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", students[i].name, students[i].marks);
    }

    return 0;
}
