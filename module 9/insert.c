#include <stdio.h>

/*
 * Note::
 1. We are trying to insert a new value in an array.so we have to increase
 the array size.
 2. After increasing size we have move the value in next position.For example,
 If we have an array of [1,2,3] and we're trying to insert 4 in index 1 we have 
 make it like [1,2,2,3].What we have done here is that we have change position
 of the values.
   given array: [1,2,3] **index: 0,1,2 
   expected output: [1,given value,2,3]
   Increase size: [1,2,3,<new empty space>] **index: 0,1,2,3
   a[3] = a[2]
   a[2] = a[1]

    ## Using loop we'll do that until index+1.Why? a[i] = a[i-1]
     - Because have to change value of the given position.

   After moving position array will look like: [1,2,2,3]
   after that just swap the value
   a[given index] = a[given value]
   Print output: [1,given value,2,3]

example ques:
4 -> array length
10 30 40 50 -> value
1  50 -> index , value need to change
   
*/

int main(){
    int n ;
    scanf("%d",&n);

    int a[n+1];

    for(int i=0; i<n ; i++){
        scanf("%d",&a[i]);
    }
    int idx,val;
    scanf("%d %d",&idx,&val);

    for(int i=n ; i > idx+1 ; i--){
        a[i] = a[i-1];
    }
    a[idx] = val;

    for ( int i = 0 ; i <= n ; i++){
        printf("%d ",a[i]);
    }

    return 0;
}

/* int main(){
    int n;
    scanf("%d",&n);

    // int a[n]; //regular input
    int a[n+1]; // as we are trying to insert we need an extra place that's why we are increasing array size
    for (int i = 0 ; i < n ; i++){
        scanf("%d",&a[i]);
    }
    int index,val;
    scanf("%d %d",&index,&val);
 
    // creating a space so that we can insert new value in given index
    for(int i = n ; i >= index +1 ; i--){
         a[i] = a [i - 1];
    }

    a[index] = val; //inserting new val in given index

    for(int i = 0 ; i <= n ; i++){
        printf("%d ",a[i]);
    }

    return 0;
}*/