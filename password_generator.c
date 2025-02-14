#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char getRandomChar(const char *charset, int charsetSize) {
    return charset[rand() % charsetSize];
}

int main() {
    srand(time(NULL));

    int length;
    int includeUppercase, includeNumbers, includeSymbols;

    printf("Enter the length of the password: ");
    scanf("%d", &length);

    printf("Include uppercase letters? (1 for Yes, 0 for No): ");
    scanf("%d", &includeUppercase);

    printf("Include numbers? (1 for Yes, 0 for No): ");
    scanf("%d", &includeNumbers);

    printf("Include symbols? (1 for Yes, 0 for No): ");
    scanf("%d", &includeSymbols);

    const char lowercaseLetters[] = "abcdefghijklmnopqrstuvwxyz";
    const char uppercaseLetters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const char numbers[] = "0123456789";
    const char symbols[] = "!@#$%^&*()_+-=[]{}|;:,.<>?";

    char charset[100] = "";
    strcat(charset, lowercaseLetters);

    if (includeUppercase) {
        strcat(charset, uppercaseLetters);
    }
    if (includeNumbers) {
        strcat(charset, numbers);
    }
    if (includeSymbols) {
        strcat(charset, symbols);
    }

    int charsetSize = strlen(charset);

    char password[length + 1];
    for (int i = 0; i < length; i++) {
        password[i] = getRandomChar(charset, charsetSize);
    }
    password[length] = '\0'; 

    printf("Generated Password: %s\n", password);

    return 0;
}