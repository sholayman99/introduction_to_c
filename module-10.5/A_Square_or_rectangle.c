#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
   

    while (n--)
    {
      int w,h;
      scanf("%d %d",&w,&h);
      if(w==h){
        printf("Square\n");
      }
      else if( w != h){
        printf("Rectangle\n");
      }
    }
    

    return 0;
}