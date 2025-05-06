#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n + 3;
    int space = 0;

    for (int i = 1; i <= n + 3; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= star + 3; j++)
        {
            printf("*");
        }
        printf("\n");
        star -= 2;
        space++;
    }
    return 0;
}