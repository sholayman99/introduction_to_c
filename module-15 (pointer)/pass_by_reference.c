#include <stdio.h>

void fun(int* p){
    *p = 20 ;
    printf("fun function er x: %d\n",*p); //fun function er x: 20
}

int main(){
    int x = 10;
    fun(&x); // pass by reference:this way we can send  the whole variable
    printf("main function er x: %d\n",x); //main function er x: 20
    return 0;
}

/**
 * For accessing x from fun function we do need to send it with address(&).
 * See the example for better understanding.
 - By seeing the output we do understand that by sending the value with reference
 we have access of x in fun function also.
 */