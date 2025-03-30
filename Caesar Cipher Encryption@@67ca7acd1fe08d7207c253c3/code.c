#include <string.h>
#include <ctype.h>

void caesarCipher(char str[], int shift, char encrypted[1000]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            encrypted[i] = ' ';
        } else {
            if (isupper(str[i])) {
                encrypted[i] = ((str[i] - 'A' + shift) % 26) + 'A';
            } else if (islower(str[i])) {
                encrypted[i] = ((str[i] - 'a' + shift) % 26) + 'a';
            } else {
                encrypted[i] = str[i];
            }
        }
    }
    encrypted[strlen(str)] = '\0';  // Null-terminate the string
}