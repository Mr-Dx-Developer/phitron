#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1001];
    scanf("%s", s);
    int n = strlen(s);
    int vowelCount = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' || 
            s[i] == 'e' || 
            s[i] == 'i' || 
            s[i] == 'o' || 
            s[i] == 'u') {
            vowelCount++;
        }
    }
    printf("%d", vowelCount);


    return 0;
}