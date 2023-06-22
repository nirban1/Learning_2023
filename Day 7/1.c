#include <stdio.h>

int main() {
    FILE *source_file, *target_file;
    char source_path[100], target_path[100];
    char ch;

    printf("Enter source file path: ");
    scanf("%s", source_path);

    printf("Enter target file path: ");
    scanf("%s", target_path);

    source_file = fopen(source_path, "r");

    if (source_file == NULL) {
        printf("Unable to open source file.\n");
        return 0;
    }

    target_file = fopen(target_path, "w");

    if (target_file == NULL) {
        fclose(source_file);
        printf("Unable to open target file.\n");
        return 0;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, target_file);
    }

    printf("File copied successfully.\n");

    fclose(source_file);
    fclose(target_file);

    return 0;
}
