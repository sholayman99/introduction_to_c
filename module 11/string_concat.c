#include <stdio.h>
#include <string.h>

int main(){
    char a[101];
    char b[101];

    scanf("%s %s",&a,&b);

   int aLength = strlen(a);
   int bLength = strlen(b);

    //logic
   for(int i= 0 ; i < aLength+bLength ; i++){
    a[aLength+i] = b[i];
   }

   //shortcut
   strcat(a,b); // strcat(With which one will concat,what will concat)

   printf("%s",a);

    return 0;
}