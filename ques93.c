//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#define MAX 100
int isAnagram(char str1[], char str2[]) {
    int count[256] = {0}; // Assuming ASCII character set

    // If lengths are not equal, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Count characters in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
    }

    // Subtract counts using str2
    for (int i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)str2[i]]--;
        if (count[(unsigned char)str2[i]] < 0) {
            return 0; // More occurrences in str2 than in str1
        }
    }

    return 1; // Strings are anagrams
}