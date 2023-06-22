#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long computeTotalSeconds(const char* timeStr) {
    char* token;
    char* savePtr;
    unsigned long totalSeconds = 0;

    // Split the string using ":" delimiter
    token = strtok_r((char*)timeStr, ":", &savePtr);
    
    // Extract hours
    unsigned long hours = strtoul(token, NULL, 10);
    totalSeconds += hours * 3600;
    
    // Extract minutes
    token = strtok_r(NULL, ":", &savePtr);
    unsigned long minutes = strtoul(token, NULL, 10);
    totalSeconds += minutes * 60;
    
    // Extract seconds
    token = strtok_r(NULL, ":", &savePtr);
    unsigned long seconds = strtoul(token, NULL, 10);
    totalSeconds += seconds;

    return totalSeconds;
}

int main() {
    const char timeStr[] = "10:12:50";
    unsigned long totalSeconds = computeTotalSeconds(timeStr);
    
    printf("Time: %s\n", timeStr);
    printf("Total seconds: %lu\n", totalSeconds);
    
    return 0;
}