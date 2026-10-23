#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    // printf("%d",n);

    int digit = n/1000;
    // printf("%d",digit);

    if(digit%2==0){
      printf("EVEN");
    }
    else{
        printf("ODD");
    }

     return 0;
}