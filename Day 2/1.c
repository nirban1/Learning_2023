#include <stdio.h>

void printNumbers(int n);
void printSpaces(int n);
void printPattern(int n);

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printPattern(n);

    return 0;
}

void printNumbers(int n) {
    int i;

    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }

}
void printNumbersReverse(int n){
	int i;
	for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    int i;

    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void printPattern(int n) {
    int i;

    for (i = n; i >= 1; i--) {
        printNumbers(i);
        printSpaces(2 * (n - i));
        printNumbersReverse(i);
        printf("\n");
    }
}