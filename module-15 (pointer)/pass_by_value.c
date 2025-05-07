#include <stdio.h>

void fun(int x){
    x = 20 ;
    printf("fun function er x: %p\n",&x); //fun function er x: 000000000061FDF0
}

int main(){
    int x = 10;
    fun(x); // pass by value: because this way we only send value not the whole variable
    printf("main function er x: %p\n",&x); //main function er x: 000000000061FE1C
    return 0;
}

/**
 * By seeing both output we do understand that both x are different
  so changing x in fun function won't change the value of x in main
  function.
 */