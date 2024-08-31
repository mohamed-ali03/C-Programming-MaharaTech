#include <stdio.h>
#include <stdlib.h>


int main(void){
    int i , j ;
    int temp;
    // use calloc to declare a block of memeory 
    int *x = (int*)calloc(10,sizeof(int));
    // use realloc to resize the block 
    realloc(x,5*sizeof(int));
    // Check if pointer is null or not 
    if (x == NULL)
    {
        // if pointer null print error massege 
        printf("Error: Faild to access the memory !!\n");
    }
    else{
        // Get the data 
        for (i = 0 ; i < 5 ; i++){
            printf("Enter number %i : ",i+1);
            scanf("%i",&x[i]);
        }

        // Bubble Sorting
        for (i = 0 ; i < 4 ; i++){
            for (j = i ; j < 5 ; j++){
                if (x[i] > x[j]){
                    temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            
            }
        }
        // print the array after sorting
        for (i = 0 ; i < 5 ; i++){
            printf("%i\t",x[i]);
        }
    }
    free(x);
    return 0 ;
}