#include <stdio.h>
int main(){
    float radius;

    //Enter the radius of the circle
    printf("Enter the radius of circle:");
    scanf("%f", &radius);
    
    //Area of the circle

    float area = 3.14 * (radius * radius);
    printf("The area of circle is: %.2f", area);

    return 0;
}