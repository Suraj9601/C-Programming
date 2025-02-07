#include<stdio.h>
int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d",array[0],array[1],array[2],array[3],array[4],array[5],array[7],array[8],array[9]);
    for(int i=0;i<10;i++){
        if (i==6)
        {
            continue;
        }
        printf("\n%d",array[i]);
        
    }
    return 0;
}
