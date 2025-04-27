#include <stdio.h>

int main(){
    int t ;
    scanf("%d",&t);

    while (t--)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);

        int tf = m1+m2; 
        int tw = m1 * d;  
        int wd = tw / tf;
        int rd = d-wd;
        printf("%d\n",rd);
    }
    

    return 0;
}