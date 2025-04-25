#include <stdio.h>

int main(){
    char a[100001];

    scanf("%s",a);

    int co=0 ;

    for( int i=0 ; a[i] != '\0' ; i++){
      if(a[i] == 'a' ||a[i] == 'e'  ||a[i] == 'i'  ||a[i] == 'o' ||a[i] == 'u'){
        continue;
      }
      else{
        co++;
      }
    }

    printf("%d",co);

    return 0;
}