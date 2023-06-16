#include <stdio.h>
int findMax(int num1, int num2) {
    int max;

    // Using if-else
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    // Using ternary operator
    max = (num1 > num2) ? num1 : num2;

    return max;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int max = findMax(num1, num2);
    printf("The maximum number is: %d\n", max);

    return 0;
}
