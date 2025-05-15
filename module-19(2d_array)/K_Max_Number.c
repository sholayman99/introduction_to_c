#include <stdio.h>

int max_number (int a[],int n, int i)
{
      if(i == n-1)
      {
        return a[i];
      }
    
      int val = max_number(a,n,i+1);
      if( val > a[i]){
        return  a[i] = val;
      } 
      else{
        return a[i];
      } 
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int ans = max_number(a,n,0);
    printf("%d",ans);
    return 0;
}