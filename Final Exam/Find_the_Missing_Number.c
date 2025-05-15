#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t > 0)
    {
       long long int a,b,c,d;
       scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
       long long int mul = b*c*d;

       if(a == 0)
       {
        printf("0\n");
       }
       else{
         if(mul == 0)
         {
            printf("0\n");
         }
         else if(a % mul == 0)
         {
            long long int missing = a/mul;
            printf("%lld\n",missing);
         }
         else{
            printf("-1\n");
         }
       }
       t--;
    }

    return 0;
}