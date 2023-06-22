#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

Complex readComplex() {
    Complex c;
    printf("Enter real part: ");
    scanf("%lf", &c.real);
    printf("Enter imaginary part: ");
    scanf("%lf", &c.imaginary);
    return c;
}

void writeComplex(Complex c) {
    printf("Complex number: %.2lf + %.2lfi\n", c.real, c.imaginary);
}

Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

int main() {
    Complex c1, c2;

    printf("Reading first complex number:\n");
    c1 = readComplex();

    printf("Reading second complex number:\n");
    c2 = readComplex();

    printf("\n");

    printf("First complex number:\n");
    writeComplex(c1);

    printf("Second complex number:\n");
    writeComplex(c2);

    printf("\n");

    Complex sum = addComplex(c1, c2);
    printf("Sum of the complex numbers:\n");
    writeComplex(sum);

    Complex product = multiplyComplex(c1, c2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);

    return 0;
}