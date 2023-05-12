#include <stdio.h>

int main() {
    int i, j, k, spaces;
    for (i = 1; i <= 5; i++) {
        spaces = 5 - i;
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2*i-1); k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    for (i = 4; i >= 1; i--) {
        spaces = 5 - i;
        for (j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (k = 1; k <= (2*i-1); k++) {
            printf("%d", k);
        }
        printf("\n");
    }
    return 0;
}