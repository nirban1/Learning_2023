#include <stdio.h>

void printExponent(double x) {
    unsigned long long *p = (unsigned long long *) &x;  // Type cast to access the bits
    unsigned long long exponent = (*p >> 52) & 0x7FF;   // Extracting the exponent bits
    //Getting the hexadecimal and binary value
    printf("Exponent in hexadecimal: 0x%llX\n", exponent);
    printf("Exponent in binary: 0b");
    
    // Print the exponent bits in binary format
    for (int i = 11; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
