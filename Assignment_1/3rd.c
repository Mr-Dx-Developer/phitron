#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);


    int sum = 0;
    while(N>0)
    {
        sum += N%10;
        N/=10;
    }

    if(sum % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    

    



    return 0;
}
