#include <stdio.h>

int main() {
    char letter;
    scanf("%c", &letter);
    if (letter >= 'a' && letter <= 'z') {
        letter -= 32;
    } else if (letter >= 'A' && letter <= 'Z') {
        letter += 32;
    }
    printf("%c", letter);
    return 0;
}