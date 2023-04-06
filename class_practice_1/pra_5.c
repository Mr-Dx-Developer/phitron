#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=5000)
    {
       if(tk>=10000)
       {
        if(tk>20000)
        {
            printf("Belt and bag");
        }
        else
        {
            printf("Gucci");
        }
       }
       else
       {
        printf("levis");
       }
    }
    else
    {
        printf("Buy something from new market");
    }
    return 0;
    
}