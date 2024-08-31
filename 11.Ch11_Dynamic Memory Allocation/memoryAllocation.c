#include <stdio.h>
#include <stdlib.h>


int main (void){
    int *x ;
    
    printf("Stack pointer is %u\n",x);
    x = (int*) malloc(4);
    if (x == NULL)
    {
        printf("Pointer is NULL\n");
    }
    else{
        printf("Heap Pointer is %u\n",x);
    }
    free(x);
    return 0 ;
}