//Write a program that creates an array of 10 integers and calculates its average, min and max.

#include <stdio.h>

#define MAX_SIZE = 256;

int main(){

    int array[10]= { 205, 21, 2251, 4, 5, 6, 70, 8, 9, 10 };
    float average = 0;
    int min = 0 ;
    int max = 0;

    int *ptrA = array;
    int initialValue = *ptrA;

    for ( ; ptrA < & array[10]  ;  ptrA++)
    {
        //Find average
        average += *ptrA;

        //Find min
        if( *ptrA < min ){
            min = *ptrA;
        }else if( *ptrA <= initialValue && ptrA == &array[0]){
            min = *ptrA;
        }

        //Find max
         if( *ptrA > max ){
            max = *ptrA;
        }

    }

    average = average / 10;

    printf("Average: %.2f\n",average);
    printf("Min: %d\n",min);
    printf("Max: %d\n",max);

    return 0;
}
