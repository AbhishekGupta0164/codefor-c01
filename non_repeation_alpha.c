#include <stdio.h>
#include <string.h>
// to print non repeating alphabet 
int main() {
    char str[] = "hello";
    int ln = strlen(str);
    int freq[256] = {0};

    // Count frequency of each character
    for (int i = 0; i < ln; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find first non-repeating character
    for (int i = 0; i < ln; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("%c\n", str[i]);
            break; // Stop after printing first non-repeating character
        }
    }

    return 0;
}
