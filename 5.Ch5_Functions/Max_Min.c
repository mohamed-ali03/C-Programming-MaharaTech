#include <stdio.h>


int GetMax(int *numbers);
int GetMin(int *numbers);


int main(void){
    int numbers[4];
    int counter  ;
    int maximum ;
    int minimum ;
    for (counter = 0 ; counter <4 ; counter++){
        printf("Enter Number %i: ",counter+1);
        scanf("%i",&numbers[counter]);
    }
    
    maximum = GetMax(numbers);
    minimum = GetMin(numbers);

    printf("Max = %i\tMin = %i\n",maximum,minimum);

    return 0 ;
}

int GetMax(int *numbers){
    int max = numbers[0] ; 
    int counter ;
    for (counter = 1 ;counter < 4 ; counter++){
        if(numbers[counter] > max){
            max = numbers[counter] ;
        }
    }
    return max ;
}
int GetMin(int *numbers){
    int min = numbers[0] ;
    int counter ;
    for (counter = 1 ;counter < 4 ; counter++){
        if(numbers[counter] < min){
            min = numbers[counter] ;
        }
    }
    return min;
}