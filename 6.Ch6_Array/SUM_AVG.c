#include <stdio.h>


int main(void){
    int i ;
    int input [10] ;
    int sum = 0 ;
    int avg ;
    printf("Enter the 10 numbers \n");
    for (i = 0 ; i < 10; i++){
        printf("Number %i: ",i+1);
        scanf("%i",&input[i]);
    }

    for (i = 0 ; i < 10; i++){
        sum += input[i];
    }
    
    avg = sum/10;

    printf("The sum of 10 no is : %i\n",sum);
    printf("The Average is : %i\n",avg);
    return 0 ;
}