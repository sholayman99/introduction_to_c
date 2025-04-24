#include <stdio.h>

int main(){
    //first array
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }

    

    //second array
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0 ; i<m ; i++){
        scanf("%d",&b[i]);
    }

   

    int c[n+m];

    // copy first array to c array
    for(int i=0 ; i<n ; i++){
        c[i] = a[i];
       
    }

     // copy second array to c array
     for(int i=0 ; i<n+m ; i++){
        c[i+n] = b[i];
       
    }
    
    for(int i=0 ; i<n+m ; i++){+
        printf("%d ",c[i]);
    }
    return 0;
}