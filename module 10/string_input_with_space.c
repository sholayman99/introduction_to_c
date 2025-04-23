#include <stdio.h>

int main(){
    char a[50];
    // scanf("%s",&a); 
    // gets(a);
    fgets(a,12,stdin);
    printf("%s",a);
    return 0;
}

/*
** Note:
  #. scanf takes string input as long as there is no space.if it finds space it stops.
  #. For taking string with space there is two way. One of them is standard other
  one is not standard.
   1. gets ---> not standard
      structure: gets(array name);
    
      ==> Limitations: not standard so all compiler don't know about it.
      ==> Key point: Doesn't count enter as an input.

   2. fgets ---> standard
      structure: fgets(array name,array size with null character, stdin keyword);

       ==> Limitations: takes enter as an input.
      ==> Key point:all compiler knows about it. Stops as soon as find enter.
*/