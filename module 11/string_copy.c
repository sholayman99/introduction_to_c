#include <stdio.h>
#include <string.h>

int main(){
    char a[101] ;
    char b[101];

    scanf("%s %s",a,b);

    int length = strlen(b);

    // logic

    for(int i=0 ; i <= length ; i++){ // also sending null(\0) using <=. That's why it is copying perfectly
        a[i] =  b[i];
    }

    //short cut using built in
    strcpy(a,b);   // strcpy(what will be replaced,which one will copy);

    printf("%s %s",a,b);

    return 0;
}

/*
* main logic here is how long we should run the loop.
*/