#include <stdio.h>

void binaryNumber(int num)
{
    if(num==0)
        return;

    binaryNumber(num/2);

    printf("%d",num%2);

}

int main(void)
{
    int num;
    printf("2진수로 변환할 정수를 입력하세요: ");
    scanf("%d",&num);
    printf("2진수로 변환한 값은:");
    binaryNumber(num);
    return 0;
}
