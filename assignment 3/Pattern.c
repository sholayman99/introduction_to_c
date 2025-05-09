#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int hash = 1;
    int space = n - 1;
    int line = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < space; j++) {
            printf(" ");
        }

        if(line % 2 == 0)
        {
          for (int j = 0; j < hash; j++) {
            printf("#");
        }   
        }
        else{
             for (int j = 0; j < hash; j++) {
              printf("-");
        }
        }
        printf("\n");

        line++;
        hash += 2;
        space--;
    }
    hash -= 4;
    space = 1;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < space; j++) {
            printf(" ");
        }

         if(line % 2 == 0)
        {
          for (int j = 0; j < hash; j++) {
            printf("#");
        }   
        }
        else{
             for (int j = 0; j < hash; j++) {
              printf("-");
        }
        }
        printf("\n");

        line++;
        hash -= 2;
        space++;
    }

    return 0;
}
