#include <stdio.h>

int main(void)
{
    int a,b,c;
    int n=5;
   
    for(a=0; a<6; a++)
    {
       for(b=0; b < (n-a); b++)
       {
        printf(" ");
       }
       for(c=0; c <(a*2-1); c++)
       {
        printf("*");
       }

       printf("\n");

    }

    return 0;
}