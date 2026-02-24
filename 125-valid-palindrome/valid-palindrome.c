#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* s) {
    int l = 0;
    int r = strlen(s) - 1;

    while (l < r) {

        while (l < r && !isalnum(s[l])) l++;

        while (l < r && !isalnum(s[r])) r--;

        if (tolower(s[l]) != tolower(s[r])) {
            return false;
        }

        l++;
        r--;
    }

    return true;
}