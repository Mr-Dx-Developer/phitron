#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);
    int l = strlen(s);
    int alphacount[26] = {0};
    for (int i = 0; i < l; i++) {
        alphacount[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        printf("%c - %d\n", 'a' + i, alphacount[i]);
    }
    return 0;
}