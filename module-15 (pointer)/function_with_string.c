#include <stdio.h>
void fun(char s[])
{ 
   printf("fun:%s\n",s);
}

int main(){
    char s[10];
    scanf("%s",s);
    printf("main:%s\n",s);
    fun(s);
    return 0;
}

// we doesn't print the size for string.because we can use strlen() for finding string length.