#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int length = ((n-1)/2) + 6;
    
    
    int star = 1;
    int space = length - 1; 
    
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= space; j++) {
            printf(" ");
        }
        
        for (int j = 1; j <= star; j++) {
            printf("*");
        }
        
        printf("\n");
        star += 2;
        space--;
    }

    int bottom_space = length - 1 - (n / 2);
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= bottom_space; j++) {
            printf(" ");
        }
        for (int j = 1; j <= n; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}