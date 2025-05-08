#include <stdio.h>

void fun (int a[],int n)
{
    a[1] = 10;
    for (int i=0 ; i<=n ; i++)
    {
        printf("%d ",a[i]);
    }
}

int main(){
    int a[5] = {1 , 2 ,3, 4,5};
    fun(a,5);
    return 0;
}

//by default variable pass in a function as pass by value
//by default array pass in a function as pass by ref
// generally array doesn't return from another function.
