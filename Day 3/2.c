#include <stdio.h>

void swap(void *ptr1, void *ptr2, size_t size) {
    char temp;
    char *p1 = ptr1;
    char *p2 = ptr2;

    for (size_t i = 0; i < size; i++) {
        temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }
}

int main() {
    int num1 = 10, num2 = 20;
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2, sizeof(int));
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    double d1 = 3.14, d2 = 2.71;
    printf("Before swapping: d1 = %lf, d2 = %lf\n", d1, d2);

    swap(&d1, &d2, sizeof(double));
    printf("After swapping: d1 = %lf, d2 = %lf\n", d1, d2);

    char c1 = 'A', c2 = 'B';
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);

    swap(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
