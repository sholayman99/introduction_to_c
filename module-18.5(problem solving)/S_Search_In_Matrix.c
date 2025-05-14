#include <stdio.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int val;
    scanf("%d",&val);

    int flag = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           if(a[i][j] == val){
            flag=1;
            break;
           }   
        }
        if(flag) break;
    }
   
   if (flag == 0)
    {
        printf("will take number\n");
    }
    else
    {
        printf("will not take number\n");
    }
   

    return 0;
}