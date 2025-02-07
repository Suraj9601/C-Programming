#include<stdio.h>
int pat(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1||j==1||i==5){
                printf(" * ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main() {
    int pat();
    printf("%d",pat());
    return 0;
}
