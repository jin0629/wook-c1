#include <stdio.h>

int main(void){
    int arr[5];
    int odd=0,even=0;
    printf("Please input five integers: ");

    for(int i=0; i<5; i++)
        scanf("%d",&arr[i]);
    for(int i=0; i<5; i++)
    {
        if(arr[i]%2==0)
            even++;
        else
            odd++;
        
    }
    int a=0,b=0;
    int arrEven[even], arrOdd[odd];
    for(int i=0; i<5; i++)
        if(arr[i]%2==0){
            arrEven[a]=arr[i];
            a++;
        }
        else{
            arrOdd[b]=arr[i];
            b++;
        }
    printf("Odd numbers:");
    for(int i=0; i<odd; i++){
        printf("%d ",arrOdd[i]);
    }
    printf("\nEven numbers:");
    for(int i=0; i<even; i++){
        printf("%d ",arrEven[i]);
    }

    return 0;
    printf("\n");

}