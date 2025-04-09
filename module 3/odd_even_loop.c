#include <stdio.h>

int main ()
{
   for (int i=1 ; i <= 10 ; i++)
   {
    if(i % 2 == 0){
        printf(" ODD %d\n",i);
    }
    else{
        printf(" Even %d\n",i);  
    }
   }
    return 0;
}

// int main ()
// {
//    for (int i=0 ; i <= 10 ; i=i+2)
//    {
//      printf("%d\n",i);
//    }
//     return 0;
// }

// int main ()
// {
//    for (int i=1 ; i <= 10 ; i=i+2)
//    {
//      printf("%d\n",i);
//    }
//     return 0;
// }

// int main ()
// {
//     int n =10;
//     if(n % 2 == 0){
//         printf("ODD number");
//     }
//     else{
//         printf("even number");
//     }
//     return 0;
// }