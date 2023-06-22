#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    struct Student students[50];

    for (int i = 0; i < n; i++) {
        printf("Enter name and marks of student %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].marks);
    }

    char search_name[50];
    printf("Enter the name of the student to search: ");
    scanf("%s", search_name);

    for (int i = 0; i < n; i++) {
        if (strcmp(students[i].name, search_name) == 0) {
            printf("%s %d\n", students[i].name, students[i].marks);
            break;
        }
    }

    return 0;
}
