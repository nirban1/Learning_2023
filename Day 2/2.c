#include <stdio.h>

void printBits(unsigned int num);

void printBits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31; 

    for (i = 0; i < 32; i++) {
        // Check if the current bit is set 1 or not 0
        if ((num & mask) != 0)
            printf("1");
        else
            printf("0");

        // Shift to the right by one bit
        mask >>= 1;
    }
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits representation: ");
    printBits(num);

    return 0;
}