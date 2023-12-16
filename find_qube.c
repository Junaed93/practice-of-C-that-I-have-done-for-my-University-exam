#include <stdio.h>
int main(){
    float n;

    printf("Enter the value of n:");
    scanf("%f", &n);

    float qube = n * n * n;
    printf("The qube of value is %.2f", qube);
}    