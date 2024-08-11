#include <stdio.h>


int main (void){
    int n ;
    int count_1 ;
    int count_2 ;
    int temp ;
    printf("Enter the size of the array : ");
    scanf("%i",&n);

    int array[n] ;
    // Get the array's values
    for(count_1 = 0 ; count_1 <n ;count_1++){
        printf("Number %i : ",count_1+1);
        scanf("%i",&array[count_1]);
    }
    // sort the array using bubble sort technique
    for(count_1 = 0 ; count_1 <n -1 ;count_1++){
        for(count_2 = count_1+1 ; count_2 <n ;count_2++){
            if (array[count_1] > array[count_2]){
                temp = array[count_1] ;
                array[count_1] = array[count_2];
                array[count_2] = temp ;
            }
        }
    }

    // show the array after sorting
    for(count_1 = 0 ; count_1 <n ;count_1++){
        printf("Number %i : %i\n",count_1+1,array[count_1]);
    }

    return 0 ;
}