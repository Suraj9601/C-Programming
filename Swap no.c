#include<stdio.h>
int main() 
{
    int a,b,swap;

    printf("Enter a number a :");
    scanf("%d",&a);

    printf("Enter a number b :");
    scanf("%d",&b);

    swap = a;
    a = b;
    b = swap;

    printf("swapping of two numbers are %d %d :",a,b);
    return 0;

}