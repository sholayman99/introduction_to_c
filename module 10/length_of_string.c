#include <stdio.h>
#include <string.h>

int main(){
    char s[101];
    scanf("%s",&s);
    
    // manual logic
    int count = 0;

    for(int i=0 ; s[i] != '\0' ; i++){
        
        count++;
    }
    // printf("%d",count);

    // shortcut
    int size = strlen(s);
    printf("%d",size);
    return 0;
}

/*
* Find the length of the string.
  Fact: 1.String will be without space
        2 . String length will be 1- 100
        
        example: programming

**Note:  We can simply use strlen function to get the size of a string

Warning: If doesn't work simply use <string.h> header file
*/