//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fp;
    char ch;
    int char_count = 0, word_count = 0, line_count = 0;
    int in_word = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    while ((ch = fgetc(fp)) != EOF) {
        char_count++;
        if (ch == '\n') {
            line_count++;
        }
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            if (in_word) {
                word_count++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }
    if (in_word) {
        word_count++;
    }

    fclose(fp);

    printf("Characters: %d\n", char_count);
    printf("Words: %d\n", word_count);
    printf("Lines: %d\n", line_count);

    return 0;
}