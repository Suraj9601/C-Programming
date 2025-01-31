#include<stdio.h>
int main(){
    int size,i;
    
    printf("Enter the size of array :");
    scanf("%d",&size);
    int nums[size];
    for(i=0;i<size;i++){
        scanf("%d",&nums[i]);
    }
    
    if(nums[0]+nums[1]==9){
        printf("%d",nums[i]);
    }
}