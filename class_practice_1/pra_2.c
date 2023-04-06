#include <stdio.h>

int main() {

    int a,b;
    float sum3;

    scanf("%d %d", &a , &b);
    printf("Result: " );


    int sum = a + b;
    printf("\n%d + %d = %d ",a,b,sum );

    int sum1 = a - b;
    printf("\n%d - %d = %d ",a,b,sum1 );
    
    int sum2 = a * b;
    printf("\n%d * %d = %d ",a,b,sum2 );

    sum3 = a* 1.0 / b ;
    printf("\n%d / %d = %.2f ",a,b,sum3 );

    return 0;
}
