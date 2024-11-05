#include <stdio.h>

int main(void){
    int arr1[6]={1,2,3,4,5,6} , arr2[6]={7,8,9,10,11,12};
    int*ptr1=arr1 , *ptr2=arr2;
    int temp;
    printf("arr1: ");
    for(int a=0; a<6; a++){
         printf("%d ",*(ptr1+a));
    }
    printf("\narr2: ");
    for(int a=0; a<6; a++){
         printf("%d ",*(ptr2+a));
    }

    printf("\nafter swap\n");

    for(int i=0; i<6; i++){
        temp=*(ptr1+i);
        *(ptr1+i)=*(ptr2+i);
        *(ptr2+i)=temp;
    }

    printf("arr1: ");
    for(int a=0; a<6; a++){
         printf("%d ",*(ptr1+a));
    }
    printf("\narr2: ");
    for(int a=0; a<6; a++){
         printf("%d ",*(ptr2+a));
    }


}