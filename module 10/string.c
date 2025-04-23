#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[n];

    for (int i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}

/*
** Note:
   1. String is a special array of character. It 
   has some special power
   2. We can't take char array/ string with space
   like an integer because space is also a charater
   For example an int array 1 2 3
   but a char array will be like Hello
   3. If we try to print H e l l o and array
   length is 5 we will get H e l .
*/