#include <stdio.h>

int main()
{
    int n, val = 1;
    scanf("%d", &n);
    int space = n-1 ;
    for (int i = 1; i <= n; i++) //for printing lines
    {
        for (int j=1 ; j<=space ; j++ ) //for printing space
        {
            printf(" ");
        }
        for (int j = 1; j <= val; j++) //for printing star
        {
            printf("%d",j);
            //printf("%d ",j); //--> creates a great shape
        }
        printf("\n");
        val ++;
        space-- ;
    }
    return 0;
}