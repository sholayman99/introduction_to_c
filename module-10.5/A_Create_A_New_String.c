#include <stdio.h>
#include <string.h>

int main(){
    char a[1001];
    char b[1001]; 

    scanf("%s",&a);
    scanf("%s",&b);

    int sizeA = strlen(a);
    int sizeB = strlen(b);

    printf("%d %d\n",sizeA,sizeB);
    printf("%s %s",a,b);

    return 0;
}