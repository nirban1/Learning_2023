#include <stdio.h>

int bit_operations(int num, int oper_type) 
{
    int result;

    switch (oper_type) {
        case 1:
            // Set 1st bit
            result = num | (1 << 0);
            break;
        case 2:
            // Clear 31st bit
            result = num & (~(1 << 31));
            break;
        case 3:
            // Toggle 16th bit
            result = num ^ (1 << 15);
            break;
        default:
            // Invalid operation type
            printf("Error: Invalid operation type.\n");
            result = num;
            break;
    }

    return result;
}

int main() 
{
    int num, oper_type, result;

    printf("Enter an integer (32 bits): ");
    scanf("%d", &num);

    printf("Enter operation type (1, 2, 3): ");
    scanf("%d", &oper_type);

    result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}