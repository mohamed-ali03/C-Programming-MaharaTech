#include <stdio.h>
#include <string.h>

int main(void){
    int n=0 ; 
    int count ;

    printf("Enter count of numbers : ");
    scanf("%i",&n);
    int array[n];

    for(count = 0 ; count <n ;count++){
        printf("Number %i : ",count+1);
        scanf("%i",&array[count]);
    }

    for(count = n ; count >= 0 ;count--){
        printf("Number %i : %i \n",count+1,array[count]);
    }

    return 0 ;
}