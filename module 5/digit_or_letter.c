#include <stdio.h>

int main(){
    char X;
    scanf("%c",&X);

    if( X >=48 && X<=57 )
    {
        printf("IS DIGIT");
    }
    else{
        printf("ALPHA \n");
        if(X >= 65 && X <=90){
            printf("IS CAPITAL"); 
        }
        else{
            printf("IS SMALL"); 
        }
    }

    return 0;
}