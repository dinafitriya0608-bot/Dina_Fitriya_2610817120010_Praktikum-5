#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[500];

    printf("Kalimat : ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\r\n")] = '\0';

    int vowels = 0, consonants = 0;

    for (int index = 0; sentence[index] != '\0'; index++) {
        char letter = tolower((unsigned char)sentence[index]);

        if (letter == 'a' || letter == 'i' || letter == 'u' ||
            letter == 'e' || letter == 'o') {
            vowels++;
        } else if (isalpha((unsigned char)letter)) {
            consonants++;
        }
    }

    printf("Jumlah Vokal : %d\n", vowels);
    printf("Jumlah Konsonan : %d\n", consonants);

    return 0;
}