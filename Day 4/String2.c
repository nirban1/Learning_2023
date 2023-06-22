#include <stdio.h>

int stringToInteger(const char* str) {
    int res = 0;
    int i = 0;
    int sign = 1;
    
    if (str[0] == '-') {
        sign = -1;
        i = 1;
    }

    for (; str[i] != '\0'; i++) 
    {
        int digit = str[i] - '0';
        if (digit >= 0 && digit <= 9) 
        {
            res = res * 10 + digit;
        } 
        else 
            break;
    }
    
    return res * sign;
}

int main() {
    const char str[] = "5278"; 
    int value = stringToInteger(str);
    
    printf("String: %s\n", str);
    printf("Integer value: %d\n", value);
    
    return 0;
}