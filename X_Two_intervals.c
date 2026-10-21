#include<stdio.h>

int main(){

    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);

    int min,max;

   

    if(A>C){
      max=A;
    }
    else{
        max=C;
    }

    if(B<D){
      min=B;
    }
    else{
        min=D;
    }
    

    if(max<=min){
        printf("%d %d", max,min);
       
    }
    else{
         printf("%d",-1);
    }
    
     return 0;
}