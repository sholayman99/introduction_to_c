#include <stdio.h>

void print_recursion(int n,int count)
{
  if(count> n)
  {
    return ;
  }
  printf("I love Recursion\n");
  print_recursion(n,count+1);
}

int main(){
    int n ;
    scanf("%d",&n);
    int count  = 1;
    print_recursion(n,count);
    return 0;
}