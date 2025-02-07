#include<stdio.h>
int patt(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=3;j++){
            if(i==1||i==3||i==5||j==1){
                printf(" * ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
int main(){
    int patt();
    printf("%d",patt());
    return 0;
}