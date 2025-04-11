#include <stdio.h>

// Write a c program to print all odd number from 100 to 1
/*
int main (){
    for (int i = 100 ; i>=1 ; i--){
       if(i%2==0){
        printf("%d\n",i);
       }
    }
    return 0;
}
*/

// Write a c program to print 8’s time table to 200
/*
int main (){
    for (int i = 8 ; i<=200 ; i=i+8){
        printf("%d\n",i);
    }
    return 0;
}
*/

// Write a c program to print all odd number from 100 to 1 using while loop

/*
int main (){
    int i = 100 ;
    while ( i >= 1 ){
       if(i%2==0){
        printf("%d\n",i);
       }
       i--;
    }
    return 0;
}
*/

// Write a c program to print 8’s time table to 200

// int main()
// {
//     int i = 8;
//     while (i <= 200)
//     {
//         printf("%d\n", i);
//         i = i + 8;
//     }
//     return 0;
// }


int main(){
    int N;
    scanf("%d",&N);
    for(int i = 1; i <= N ; i++){
        if(i % 5 == 0){
            printf("%d Yes\n",i);
        }
        else{
            printf("%d No\n",i);  
        }
    }
   
    return 0;
}