#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100], lowered[100];

    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\r\n")] = '\0';

    int length = strlen(word);
    for (int index = 0; index < length; index++) {
        lowered[index] = tolower((unsigned char)word[index]);
    }
    lowered[length] = '\0';

    int palindrome = 1;
    for (int index = 0; index < length / 2; index++) {
        if (lowered[index] != lowered[length - 1 - index]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("Kata '%s' adalah palindrom\n", word);
    } else {
        printf("Kata '%s' bukan palindrom\n", word);
    }

    return 0;
}