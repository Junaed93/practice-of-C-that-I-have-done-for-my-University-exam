#include <stdio.h>
int main(){
    float num1;
    float num2;
    float num3;
    
    printf("Enter the first number:");
    scanf("%f", &num1);
    printf("Enter the second number:");
    scanf("%f", &num2);
    printf("Enter the third number:");
    scanf("%f", &num3);
    float average = (num1 + num2 + num3) / 3;

    printf("Average of three numbers is: %.2f\n", average);
    
    
}