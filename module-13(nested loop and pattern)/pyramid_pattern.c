#include <stdio.h>

int main()
{
    int n, star = 1;
    scanf("%d", &n);
    int space = n-1 ;
    for (int i = 1; i <= n; i++) //for printing lines
    {
        for (int j=1 ; j<=space ; j++ ) //for printing space
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++) //for printing star
        {
            printf("*");
        }
        printf("\n");
        star += 2;
        space-- ;
    }
    return 0;
}