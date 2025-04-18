#include <stdio.h>

int main(){
    int x = 10;   //10
    int y = x++;  // 10-value of y, 11- value of y after inc
    int z = ++y;  // 11 11
    printf("%d \n",z++); // 11 12
    printf("%d",z);
    return 0;
}

/*
* Note: In pre increment decrement  first inc and dec will 
be done then the action will be happen.

But in post inc dec first the action will happen then
the inc and dec will be done
*/