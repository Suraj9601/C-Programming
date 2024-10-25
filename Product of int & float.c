#include<stdio.h>
int main() 
{
    int num1;
    float num2;
    float product;

    printf("Enter a integer value :");
    scanf("%d",&num1);

    printf("Enter a decimal value : ");
    scanf("%f",&num2);

    product = num1 * num2;

    printf("product of %d & %f datatype is %f",num1,num2,product);

    return 0;
}