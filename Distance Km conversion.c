#include<stdio.h>
void main()
{
    float km;
    float m, cm, feet, inch;
    printf("Enter the distance in kilometers:");
    scanf("%f",&km);

    m = km * 1000;
    cm = m * 100;
    feet = m * 3.33;
    inch = m * 12;

    printf("Distance Km in \n 1) Meter is %f\n 2) Centimeter is %f\n 3) Feet is %f\n 4) Inches is %f\n",m,cm,feet,inch,km);

    return 0;
}