#include<stdio.h>
int main() 
{
    float l,b,area,parameter;

    printf("Enter length of rectangle l :");
    scanf("%f",&l);

    printf("Enter breadth of rectangle b :");
    scanf("%f",&b);

    area = l * b;

    parameter = l * l * b * b;

    printf("Area of rectangle = %.2f\n",area);
    printf("Parameter of rectangle = %.2f\n",parameter);

    return 0;
}