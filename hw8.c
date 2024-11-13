#include <stdio.h>
#include <math.h>

void standardDe(double *param, int len)
{
    double a=0 ,avg, sum=0,sd;
 
    for ( int i = 0; i <len ; i++)
        a+=param[i];
    
    avg=a/len;

    for (int i = 0; i < len; i++)
    {
        sum+=pow((param[i]-avg),2);
    }
    
    sd=sqrt(sum/len);

    printf("Standard Deviation: %.3f", sd);

}

int main(void)
{
    double arr[5];

    printf("Enter 5 real number: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%lf",&arr[i]);
    }

    standardDe(arr,sizeof(arr)/sizeof(double));
    

}