#include <stdio.h>

// Structure definition
struct Point {
    int x;
    int y;
};

// Function to swap the fields of two structures using pointers
void swapPoints(struct Point* p1, struct Point* p2) {
    // Swap x coordinates
    int temp = p1->x;
    p1->x = p2->x;
    p2->x = temp;
    
    // Swap y coordinates
    temp = p1->y;
    p1->y = p2->y;
    p2->y = temp;
}

int main() {
    // Create two Point structures
    struct Point point1 = {10, 20};
    struct Point point2 = {30, 40};

    printf("Before swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);

    // Call the swapPoints function with pointers to the structures
    swapPoints(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);

    return 0;
}
