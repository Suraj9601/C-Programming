#include<stdio.h>
#include<math.h>
int main(){
    int num,power,result;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Enter the power :");
    scanf("%d",&power);

    result = pow(num,power);
    printf("Result is %d",result);
    return 0;
}