#include <stdio.h>
#include <ctype.h>

void replaceSpecialCharsWithSpace(char *str) {
    while (*str) {
        if (!isalnum(*str) && !isspace(*str)) {
            *str = ' '; // Replace special character with space
        }
        str++;
    }
}

int main() {
    char str[] = "Hello! How are you?";
    
    printf("Original string: %s\n", str);
    replaceSpecialCharsWithSpace(str);
    printf("Modified string: %s\n", str);
    
    return 0;
}
