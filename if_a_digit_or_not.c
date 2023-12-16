#include <stdio.h>
int main(){
    char num;
    printf("Enter a character: ");
    scanf("%s", &num);

    if( num>='0' && num<='9'){
        printf("The character is a digit\n");
    }else{
        printf("The character is not a digit\n");
    }
}