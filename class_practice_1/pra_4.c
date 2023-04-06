#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive");
    }
    else if(a==0)
    {
        printf("ZERO");
    }
    else
    {
        printf("NEGATIVE");
    }
    return 0;
}