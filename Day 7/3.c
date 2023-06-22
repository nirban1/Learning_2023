#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

struct LogEntry {
    int entry_no;
    char sensor_no[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
};

int read_csv_file(char *filename, struct LogEntry *entries, int max_entries) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Unable to open file %s\n", filename);
        return -1;
    }

    char line[MAX_LINE_LENGTH];
    int i = 0;

    while (fgets(line, MAX_LINE_LENGTH, fp) != NULL && i < max_entries) {
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,\n]", &entries[i].entry_no,
               entries[i].sensor_no, &entries[i].temperature,
               &entries[i].humidity, &entries[i].light, entries[i].timestamp);
        i++;
    }

    fclose(fp);

    return i;
}

void print_log_entries(struct LogEntry *entries, int num_entries) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    for (int i = 0; i < num_entries; i++) {
        printf("%d\t%s\t%.2f\t%d\t%d\t%s\n", entries[i].entry_no,
               entries[i].sensor_no, entries[i].temperature,
               entries[i].humidity, entries[i].light, entries[i].timestamp);
    }
}

int main() {
    struct LogEntry entries[100];
    int num_entries = read_csv_file("data.csv", entries, 100);
    if (num_entries == -1) {
        return 1;
    }

    print_log_entries(entries, num_entries);

    return 0;
}
