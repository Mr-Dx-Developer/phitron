#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int N;
    scanf("%lld", &N);

    if(N)
    {
        if(0 <= N )
        {
            if(N<= 10^9)
            {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
        }
    }

    



    return 0;
}
