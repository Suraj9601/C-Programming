#include<stdio.h>
int main(){
    int i,j;
    for ( i = 0; i <=5; i++)
    {
        if (i==4)
        {
            continue;
        }
        for (j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
}