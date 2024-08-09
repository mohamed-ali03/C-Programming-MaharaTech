#include <stdio.h>


int main (void){
    int num ;
    int i,j ;
    printf("Please enter the height of the pyramid : ");
    scanf("%i",&num);

    for (i = 0 ; i < num ; i++){
        for(j = num ; j > 0 ; j--){
            if(i>=j){
                printf("* ");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0 ;
}