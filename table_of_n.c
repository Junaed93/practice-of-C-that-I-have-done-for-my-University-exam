#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int table;
    for(int i=1; i<=10; i++){
      table = n * i;
      printf("The table of %d is: %d\n", n, table); 

    }
  
}    