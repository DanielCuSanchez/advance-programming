#include <stdio.h>

int main(){

    long long arreglo[100];

    arreglo[0] = 0;
    arreglo[1] = 1;

    long long *pointer;

    pointer = &arreglo[2];

    for(;&pointer[100];pointer++){
        *pointer = *(pointer - 1 )+ *(pointer - 2 );
        printf("%lu\n",*pointer);
    }



    return 0;
}
