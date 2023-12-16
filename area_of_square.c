#include <stdio.h>
int main(){
    float side;
   
    //Enter the side of square
    printf("Enter the side of the square:");
    scanf("%f", &side);

    //Area of the square
    float sum = side * side;

    printf("The area of square is: %.2f", sum);

    return 0;

}