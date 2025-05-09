#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
   int len = strlen(str); 
   int i=0;
   int j = len- 1;

   while (i<j)
   {
     if(str[i] != str[j])
     {
        return 0;
     }
     i++;
     j--;
   }

   return 1;
   
}

int main(){
    char s[1001];
    scanf("%s",s);
    int palindrome = is_palindrome(s);

    if(palindrome == 1){
        printf("Palindrome");
    }
    else if(palindrome == 0){
      printf("Not Palindrome");
    }
    return 0;
}