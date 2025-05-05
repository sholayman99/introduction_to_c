#include <stdio.h>
#include <math.h>

int main(){
    int ceilVal = ceil(4.5);
    printf("ceil-> %d\n",ceilVal); //output:5

    int roundVal = round(4.5);
    printf("round-> %d\n",roundVal); //output:5

    int roundVal2 = round(4.2);
    printf("round2-> %d\n",roundVal2); //output:5

    int floorVal = floor(4.5);
    printf("floor-> %d\n",floorVal); //output:4

    int sqrtVal = sqrt(9);
    printf("sqrt-> %d\n",sqrtVal); //output:3

    double sqrtVal2 = sqrt(20);
    printf("sqrt1-> %lf\n",sqrtVal2); //output: 4.472136

    int powerVal = pow(3,3);
    printf("power-> %d\n",powerVal); //output: 27

    int absoluteVal = abs(-10);
    printf("absolute-> %d\n",absoluteVal); //output: 10

    return 0;
}