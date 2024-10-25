#include<stdio.h>
int main()
{
    float a,b,c,average;

    printf("Enter three numbers for a,b and c :");
    scanf("%f%f%f",&a,&b,&c);

    average = (a+b+c)/3;

    printf("Average of three numbers %f,%f and %f is %f",a,b,c,average);

    return 0; 
}