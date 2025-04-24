#include <stdio.h>

int main(){
    char a[1001];
    scanf("%s",&a);

    int size = strlen(a);
   
    int i=0;
    int j=size-1;


    while(i < j){
        if(a[i] != a[j]){
            printf("NO");
            return 0 ;
        }
        i++;
        j--;
    }
     printf("YES");

    return 0;
}