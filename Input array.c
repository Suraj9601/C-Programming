#include<stdio.h>
int main(){
    int size,i;
    
    printf("Enter the size ");
    scanf("%d",&size);
    int array[size];

    printf("Enter %d element",size);
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++){
    printf("%d",array[i]);
    }
    return 0;

}