#include <stdio.h>
#include <string.h>

int main() {
    char code[256], message[256], result[256];

    fgets(code, sizeof(code), stdin);
    fgets(message, sizeof(message), stdin);
    code[strcspn(code, "\r\n")] = '\0';
    message[strcspn(message, "\r\n")] = '\0';

    int length = strlen(code);

    if (length != (int)strlen(message)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    int stars = 0, hashes = 0;

    for (int i = 0; i < length; i++) {
        if (code[i] == message[i]) {
            if (code[i] == ' ') {
                result[i] = ' ';
            } else {
                result[i] = '*';
                stars++;
            }
        } else {
            result[i] = '#';
            hashes++;
        }
    }
    result[length] = '\0';

    printf("%s\n", result);
    printf("* = %d\n", stars);
    printf("# = %d\n", hashes);

    if (stars >= hashes) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }

    return 0;
}