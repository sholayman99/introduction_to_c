#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int flag = 0;

    while(n>0)
    {
      int val = n % 10  ;
      if( val != 4 && val != 7 ){
        flag = 1;
        break;
      }
      n = n /10 ;
    }

    if(flag == 1){
        printf("NO");
    }
    else{
        if(n % 4==0 || n% 7 ==0)
        {
            printf("YES");
        }
        else{
             printf("NO");
        }
    }

    return 0;
}