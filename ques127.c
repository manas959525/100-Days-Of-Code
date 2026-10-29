//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include<stdio.h>
int main() {
    FILE *inputFile, *outputFile;
    char ch;
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {

        printf("Could not open input.txt for reading.\n");
        return 1;
    }
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Could not open output.txt for writing.\n");
        fclose(inputFile);
        return 1;
    }
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A'); // Convert to uppercase
        }
        fputc(ch, outputFile);
    }
    fclose(inputFile);  
    fclose(outputFile);
    printf("Conversion complete. Check output.txt for results.\n");
    return 0;
}   