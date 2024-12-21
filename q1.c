#include<stdio.h>

int main()
{
    float num;
    printf("Enter a number:");
    scanf("%f",&num);

    (num>0)? printf("\n number is positive"):(num<0) ? printf("\n number is negative"): printf("\n number is zero");
    return 0;
}