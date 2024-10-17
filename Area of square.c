    #include<stdio.h>
    int main() {
        int side, area;
        printf("Enter the side of square: ");
        scanf("%d", &side);

        area = side * side;
        printf("Area of square = %d", area);
        return 0;
    }