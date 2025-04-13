#include <stdio.h>

int main(){
    int X,B;
    scanf("%d",&X);
    
    while(X >= 10){
        X = X / 10;
    }
    B = X;
    if ( B % 2 != 0){
        printf("ODD");  
     }
     else{
         printf("EVEN");
     }

    return 0;
}