#include<stdio.h>

int main(){

    double n;
    scanf("%lf",&n);

    int x;
    x=n;

    if(x==n){
        printf("int %d",x);
    }
    else{
        printf("float %d %lf",x,n-x);
    }

   

     return 0;
}