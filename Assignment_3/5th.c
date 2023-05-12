#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int i, j;
    int len = strlen(str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str[11];
    int result;

    printf("Enter a string (max length 10): ");
    scanf("%s", str);

    result = is_palindrome(str);

    if (result == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}