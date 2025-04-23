#include <stdio.h>

int main(){
    //normal initialization like an integer
     char a[6] = {'H','E','L','L','O'};

     // string initialization with super power
     char b[6] = "Hello";

     // string initialization with space
     char s[50] = "I am leaning C Programming.";
     printf("%s",s);
     
    return 0;
}

/*
** Note: we can simply initialize a string inside double quotation 
with or without space.

Warning: But we have to make sure that array size is at least one size bigger than
the string.So that it can take null value by default other wise it will provide 
garbage value with output.
*/