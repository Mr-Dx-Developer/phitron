#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1001];
    int capital_count = 0, small_count = 0;

    scanf("%s", str);

    
    for(int i = 0; str[i] != '\0'; i++) {
        
        if(str[i] >= 'A' && str[i] <= 'Z') {
            capital_count++;
        }
        
        else if(str[i] >= 'a' && str[i] <= 'z') {
            small_count++;
        }
    }

    
    printf("%d %d", capital_count, small_count);
    return 0;
    



     
    return 0;
}
