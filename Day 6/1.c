#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* inputString, struct Student* students, int size) {
    const char* delimiter = " ";
    char* token = strtok((char*)inputString, delimiter);

    for (int i = 0; i < size; i++) {
        if (token == NULL) {
            printf("Invalid input: Insufficient data provided.\n");
            return;
        }

        students[i].rollno = atoi(token);
        token = strtok(NULL, delimiter);

        if (token == NULL) {
            printf("Invalid input: Insufficient data provided.\n");
            return;
        }

        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        students[i].name[sizeof(students[i].name) - 1] = '\0';
        token = strtok(NULL, delimiter);

        if (token == NULL) {
            printf("Invalid input: Insufficient data provided.\n");
            return;
        }

        students[i].marks = atof(token);
        token = strtok(NULL, delimiter);
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); 

    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    printf("Enter the student details in the format 'rollno name marks':\n");
    for (int i = 0; i < size; i++) {
        char inputString[100];
        fgets(inputString, sizeof(inputString), stdin);
        inputString[strcspn(inputString, "\n")] = '\0'; 
        parseString(inputString, &students[i], 1);
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    free(students);
    return 0;
}
