//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

#include<stdio.h>
int main() {
    char sourceFile[100], destFile[100];
    FILE *source, *dest;
    int ch;

    // Take filenames from user
    printf("Enter source filename: ");
    scanf("%s", sourceFile);
    printf("Enter destination filename: ");
    scanf("%s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Could not open source file.\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Could not open destination file.\n");
        fclose(source);
        return 1;
    }

    // Copy content from source to destination
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    // Close files
    fclose(source);
    fclose(dest);

    printf("Content copied from %s to %s successfully.\n", sourceFile, destFile);
    
    return 0;
}