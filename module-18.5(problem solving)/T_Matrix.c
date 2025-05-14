#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);
    int r = n;
    int c = n;
    int a[r][c];

    for (int i=0 ; i<r ; i++)
    {
        for (int j=0; j<c ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    int pri_val =0 ;

    for (int i=0 ; i<r ; i++)
    {
        for (int j=0; j<c ; j++)
        {
           if(i==j)
           {
             pri_val += a[i][j];
           }
        }
    }

    int sec_val =0 ;

    for (int i=0 ; i<r ; i++)
    {
        for (int j=0; j<c ; j++)
        {
           if(i+j== (r-1))
           {
             sec_val +=  a[i][j];
           }
        }
    }

  int abs_val = abs(pri_val - sec_val);

    printf("%d",abs_val);
   
    

    return 0;
}