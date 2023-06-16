#include <stdio.h>

int findLargestNumber(int num);

int findLargestNumber(int num) {
    int largest = 0;

    // Extract individual digits from the number
    int thousands = num / 1000;
    int hundreds = (num / 100) % 10;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    // Check all possible combinations by deleting a single digit
    if (thousands * 100 + hundreds * 10 + tens > largest)
        largest = thousands * 100 + hundreds * 10 + tens;
    if (thousands * 100 + hundreds * 10 + ones > largest)
        largest = thousands * 100 + hundreds * 10 + ones;
    if (thousands * 100 + tens * 10 + ones > largest)
        largest = thousands * 100 + tens * 10 + ones;
    if (hundreds * 100 + tens * 10 + ones > largest)
        largest = hundreds * 100 + tens * 10 + ones;

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestNumber(num);

    printf("Largest number after deleting a single digit: %d\n", largest);

    return 0;
}