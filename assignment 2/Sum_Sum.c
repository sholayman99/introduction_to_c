#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int a[n];

    for(int i = 0 ; i < n ; i++){
       scanf("%d", &a[i]);
    }
  int pSum = 0;
  int nSum = 0 ;
    for(int i = 0 ; i < n ; i++){ 
        if(a[i] >= 0){
           pSum = pSum + a[i];
        }  
        else  if(a[i] <= 0){
            nSum = nSum + a[i];
         }  
     }

     printf("%d %d",pSum,nSum);
 

    return 0;
}