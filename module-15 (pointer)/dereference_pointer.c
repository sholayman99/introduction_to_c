#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    printf("%d\n",x); //output:100

    int* pointer;
    pointer = &x;

    //printing the value which address is stored in pointer
    printf("%d\n",*pointer);//output:100

    //changing the value of x using dereference
    *pointer = 200;
     printf("%d\n",x);//output:200 --> value changed

    return 0;
}

/**
 * What is dereferencing a value
 - For getting address to value we use dereference.
 - Need to use * before pointer variable for this.
 - We can also change the value of the variable which address has been 
 store in pointer variable
 */