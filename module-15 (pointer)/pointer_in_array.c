#include <stdio.h>

int main(){
    int a[5] = { 10,20,30,40,50};
    printf("%d\n",a[0]);   //10
    printf("%p\n",&a[0]);  //000000000061FE00
  
    //dereference the array
    printf("Dereference:%d\n",*a); //Dereference:10

    // When we dereference the array we actually gets return the value of first index

    //Changing the value using dereference
    *a = 100;

    for(int i=0 ; i<=4 ; i++){
        printf("%d ",a[i]); // 100 20 30 40 0 
    }
    printf("\n");
    // Seeing the output we do understand that the value of first index.

    // We can also change the other index value using system.
    *(a+1) = 200; // change the value of a[1]
    *(a+2) = 300; // change the value of a[1]
    *(a+3) = 400; // change the value of a[1]
    *(a+4) = 500; // change the value of a[1]

    for(int i=0 ; i<=4 ; i++){
        printf("%d ",a[i]); // 100 200 300 400 500 
    }
    printf("\n");

    return 0;
}

/**
 * In array it's name works as a pointer and it stores the first index address.a[0]
 */