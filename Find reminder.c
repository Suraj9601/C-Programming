#include <stdio.h>
#include <math.h>

int main() 
{
    int a, r1,r2,r3;

    printf("Enter value of a: ");
    scanf("%d", &a);

    r1 = a% 2;
    printf("Reminder when %d is divided by 2 is : %d\n",a,r1);

    r2 = a % 3;
    printf("Remainder when %d is divided by 3 is: %d\n", a, r2);

    r3 = a % 5;
    printf("Remainder when %d is divided by 5 is: %d\n",a,r3);

    return 0;
}