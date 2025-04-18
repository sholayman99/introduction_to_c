#include <stdio.h>

int main(){
     int a[3] = {1,2,3}; // array declare and initialization
    // int a[] = {1,2,3}; // when we are  initialization an array if don't say it doesn't matter.
    //int a[3] = {1}; // when we are  initialization an array if don't declare value other value will be 0. For example this will output : 1 0 0
    //int a[3] = {}; // when we are  initialization an array if don't declare value it will collect garbage value.
    //int a[3] = {0}; // when we are  initialization an array if  declare value 0 all value will be 0. Output: 0 0 0
    for(int i= 0; i < 3 ; i++){
    printf("%d ",a[i]);
   }

    return 0;
}