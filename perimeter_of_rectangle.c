#include <stdio.h>
int main(){
   
    float length;
    float width;
    
    printf("Enter the length of rectangle:");
    scanf("%f", &length);
   
    printf("Enter the width of rectangle:");
    scanf("%f", &width);

    float perimeter = 2 * (length + width);

    printf("The perimeter of rectangle is %.2f", perimeter);

}
