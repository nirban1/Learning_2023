#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int numbers[MAX_SIZE];
    int size;
    int sumEvenIndex = 0;
    int sumOddIndex = 0;

    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);

        if (i % 2 == 0) {
            sumEvenIndex += numbers[i];
        } else {
            sumOddIndex += numbers[i];
        }
    }

    int diff = sumEvenIndex - sumOddIndex;

    printf("Sum of even-indexed elements: %d\n", sumEvenIndex);
    printf("Sum of odd-indexed elements: %d\n", sumOddIndex);
    printf("Difference: %d\n", diff);

    return 0;
}
