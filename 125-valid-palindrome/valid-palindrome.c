#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* s) {
    int l = 0;
    int r = strlen(s) - 1;

    while (l < r) {

        // Skip non-alphanumeric from left
        while (l < r && !isalnum(s[l])) l++;

        // Skip non-alphanumeric from right
        while (l < r && !isalnum(s[r])) r--;

        // Compare lowercase characters
        if (tolower(s[l]) != tolower(s[r])) {
            return false;
        }

        l++;
        r--;
    }

    return true;
}