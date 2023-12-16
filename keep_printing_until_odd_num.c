#include <stdio.h>
int main(){
    int n;
    for(n=1; ;n++){
          printf("Enter the number: ");
          scanf("%d", &n);
          printf("%d\n", n);
          if(n%2 !=0){
            break;
          }else{
            printf("Even\n");
         }
        }
        printf("Odd. Thanks!");
    }
  

