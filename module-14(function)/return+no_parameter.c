#include <stdio.h>

int sum (){
    int a,b;
    scanf("%d %d",&a,&b);
    return a+b;
}


int main(){
   
    int val3 = sum();
    printf("%d",val3);
    return 0;
}