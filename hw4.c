#include <stdio.h>

int main (void)
{
    int num1;
    int n,result;
    result=0;
    printf("Please enter a number:");
    scanf("%d", &num1);

    if (num1 == 1) {
        printf("It is not a prime number");
        return 0; 
    }
    for(n=2; n<num1; n++)
        {
        if (num1%n==0){
             result=1;
             break;
           }
        }
    if(result==1)
        printf("It is not a prime number");
    else
        printf("It is  a prime number");

    return 0;
}