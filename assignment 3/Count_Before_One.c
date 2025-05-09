#include <stdio.h>

int  count_before_one(int a[],int n)
{
   int count = 0;
   int i=0 ;
   while(a[i] != 1){
    count ++;
    i++;
   }
   return count;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int count = count_before_one(a,n);
        
    printf("%d",count);
    return 0;
}