#include<stdio.h>
int main()
{
    float f,c;

    printf("Enter temperature in fahrenheit :");
    scanf("%f",&f);

    c = (f - 32) * 5/9;
    printf("Temperature fahrenheit (%f) in degree celsius is %f",f,c);

    return 0;
}