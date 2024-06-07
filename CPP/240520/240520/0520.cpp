#include <stdio.h>
#include <string.h>

void removeChar(char* inputString, char charToRemove) {
    char* i = inputString, * j = inputString;
    while (*j != '\0') {
        *i = *j++;
        if (*i != charToRemove) {
            i++;
        }
    }
    *i = '\0';
}

int main() {
    char inputString[] = "Hello, World!";
    char charToRemove = ',';
    removeChar(inputString, charToRemove);
    printf("%s\n", inputString);  // Output: "Hello World!"

    return 0;
}
