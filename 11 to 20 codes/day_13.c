#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[100];

    // Read single character
    scanf("%c", &ch);
    printf("%c\n", ch);

    // Read a word (without spaces)
    scanf("%s", s);
    printf("%s\n", s);

    // Read a full sentence (with spaces)
    scanf(" %[^\n]", sen);   // space before %[^\n] ignores leftover newline
    printf("%s\n", sen);

    return 0;
}
