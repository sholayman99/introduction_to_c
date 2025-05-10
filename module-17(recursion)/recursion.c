
/*
** Waring: Don't run compiler or you'll get infinite loop
*/

#include <stdio.h>

void hello()
{
    printf("hello\n");
    hello();
}

int main()
{
    printf("hi\n");
    hello();
    return 0;
}


/**
 * What is recursion
 ==: A function that calls itself to perform a task is called a recursive function,
  and this entire process of performing a task is called recursion.

  In the example___
    --> hello is recursive function
    --> hello function is recursion process.
    

  ==# Key Points #==
   1. It's a very powerfull method and tricks
   2. Recursion can be controlled.
 */