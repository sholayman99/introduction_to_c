#include <stdio.h>

int rec(char s[],int idx)
{
   if(s[idx] == '\0')
   {
    return 0;
   }
   int ctn = rec(s,idx+1);
   if(s[idx] == 'a' || s[idx] == 'e' || s[idx] == 'i' || s[idx] == 'o' || s[idx] == 'u' || s[idx] == 'A' || s[idx] == 'E' || s[idx] == 'I' || s[idx] == 'O' || s[idx] == 'U' )
   {
     return  ctn + 1;
   }
   else{
    return ctn;
   }
}

int main(){
    char str[201];
    fgets(str,201,stdin);
    int ans = rec(str,0);
    printf("%d",ans);
    return 0;
}