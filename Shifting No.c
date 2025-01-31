#include<stdio.h>
int main() 
{
    int a,b;

    printf("Enter a number a :");
    scanf("%d",&a);

    printf("Enter a number b :");
    scanf("%d",&b);

    b = a << 3;

    printf("After shifting number is %d",b);

    return 0;
}