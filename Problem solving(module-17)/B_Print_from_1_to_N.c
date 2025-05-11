#include <stdio.h>

print_till_N(int n,int i){
   if(i > n){
    return ;
   }

   printf("%d\n",i);
   print_till_N(n,i+1);
}

int main(){
    int n;
    scanf("%d",&n);
    print_till_N(n,1);
    return 0;
}