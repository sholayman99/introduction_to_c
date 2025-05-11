#include <stdio.h>

void print_till_N(int n,int i){
   if(i == 0){
    return ;
   }
    
    printf("%d",i);
    if(i > 1) printf(" ");
    print_till_N(n,i-1);
   
}

int main(){
    int n;
    scanf("%d",&n);
    print_till_N(n,n);
    return 0;
}