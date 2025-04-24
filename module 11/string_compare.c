#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    char a[101];
    char b[101];
    scanf("%s %s",a,b);

    //shortcut
     int val = strcmp(a,b);
     if(val < 0){
        printf("A is small");
     }
     else if(val == 0){
        printf("Equal");
     }
     else if(val > 0){
        printf("B is small");
     }
    
    //manual comparision
    /*int i=0;
    while (1)
    {
       if( a[i] == '\0' && b[i] == '\0')
       {
        printf("Equal");
        break;
       }
       else if(a[i] == '\0')
       {
        printf(" A is small");
        break;
       }
       else if(b[i] == '\0')
       {
        printf(" B is small");
        break;
       }
       else if(a[i] < b[i])
       {
        printf("A is smaller");
        break;
       }
       else if(b[i] < a[i])
       {
        printf("B is smaller");
        break;
       }
       else if(a[i] == b[i]){
        i++;
       }
    }
       */
    

    return 0;
}