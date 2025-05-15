#include <stdio.h>

long long int sum (int a[],int n, int i)
{
     if(i == n){
        return 0;
     }
     long long int val = sum(a,n,i+1);
     return val+a[i];
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    long long int ans =sum(a,n,0);
    printf("%lld",ans);
    return 0;
}