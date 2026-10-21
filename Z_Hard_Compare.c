#include<stdio.h>
#include <math.h>

int main(){

    long long int A,B,C,D;
    scanf("%lld %lld %lld %lld", &A,&B,&C,&D);
    

    long double left = (long double)B * logl(A);
    long double right = (long double)D * logl(C);

    if(left>right){
       printf("YES");
    }
    else{
        printf("NO");
    }



    return 0;
}