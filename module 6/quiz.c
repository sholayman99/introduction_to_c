#include <stdio.h>

int main(){
   int j = -3;
   while( j < 0){
    for ( int i = 0 ; i < 5 ; i++){
        printf("*\n");
    }
    j--;
   }
    return 0;
}