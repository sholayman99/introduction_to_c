#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
   
    while (n--)
    {
        char s[10001];
        scanf("%s",s);
        int str=0,sm=0,cap=0;

        for (int i=0 ; s[i] != '\0'; i++){
            if(s[i] >= 65 && s[i] <=90){
              cap++;
            }
            else if(s[i] >= 97 && s[i] <=122)
            {
                sm++;
            }
            else{
                str++;
            }
        }
        printf("%d %d %d\n",cap,sm,str);
    }
    return 0;
}