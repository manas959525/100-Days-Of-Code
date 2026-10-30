//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include<stdio.h>
#include<ctype.h>

int main() {
    FILE *fp;
    char ch;
    int vowel_count = 0, consonant_count = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
    }

    fclose(fp);

    printf("Number of vowels: %d\n", vowel_count);
    printf("Number of consonants: %d\n", consonant_count);

    return 0;
}