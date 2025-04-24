#include <stdio.h>

int main(){
    char n[100001];
    scanf("%s",&n);
   
    for(int i=0 ; n[i] != '\0' ; i++){
       if( n[i] == ','){
        n[i] = ' ';
       }
    }

    for(int i=0 ; n[i] != '\0' ; i++){
       if(n[i] >= 65 && n[i] <=90){
        n[i] += 32;
       }
       else if(n[i] >= 97 && n[i] <=122){
        n[i] -= 32;
       }
     }

    printf("%s",n);
    return 0;
}