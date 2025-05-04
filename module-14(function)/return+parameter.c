#include <stdio.h>

int sum (int num1 , int num2){
    return num1+num2;
}

int sub (int num1 , int num2){
    return num1-num2;
}

int main(){
    int val = sum(1,2);
    int val2 = sub(10,5);
    int a,b;
    scanf("%d %d",&a,&b);
    int val3 = sum(a,b);
    printf("%d %d %d",val,val2,val3);
    return 0;
}