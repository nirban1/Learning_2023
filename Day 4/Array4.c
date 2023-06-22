#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int numbers[MAX_SIZE];
    int size;
    int sumEven = 0;
    int sumOdd = 0;

    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
        } else {
            sumOdd += numbers[i];
        }
    }

    int diff = sumEven - sumOdd;

    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Difference: %d\n", diff);

    return 0;
}
