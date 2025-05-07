#include <stdio.h>

int main(){
    int x= 5;
    printf("%d\n",x);
    printf("%p\n",&x); // for seeing x variable's address

    //declaring a pointer variable
     int* ptr ; // data type of the variable which address will be store           
     ptr = &x ; // data type* pointer variable name

     printf("%p\n",ptr); //print pointer variable

     //print address of this pointer variable's address
     printf("%p\n",&ptr);

    return 0;
}

/*
* What is pointer?
- Pointer is a variable which stores other's variable's address.
*/