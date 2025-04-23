#include <stdio.h>

int main(){
    char a [10];
    scanf("%s",&a);
    printf("%s",a);
    return 0;
}

/*
** Note:
   1. Always declare array 1 character bigger than the input.
   2. String has some super power. For example if we take Hello as an input we can print and take input
   using given example.We don't need loop
   3. String always maintains a null character so that compiler can understand what it have
   to print.For example,
    char a[10] = Hello
    index are 0 1 2 3 4
    so it's finished in 4 index so string fix 5 index as a null so that compiler can understand
    where string is finishing.Other index 6,7,8,9 will be garbage value.
*/