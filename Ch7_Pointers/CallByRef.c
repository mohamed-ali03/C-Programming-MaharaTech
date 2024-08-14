#include <stdio.h>

void calculator (int *num1 , int *num2 , int *sum,int *sub);

int main(){
    int x ; 
    int y ;
    int sum ;
    int sub ;
    printf("Enter the first number : ");
    scanf("%i",&x);
    printf("Enter the second number : ");
    scanf("%i",&y);

    calculator(&x ,&y ,&sum, &sub);

    printf("Summation = %i\n",sum);
    printf("Subtraction = %i\n",sub);
}


void calculator (int *num1 , int *num2 , int *sum,int *sub){
    *sum = *num1 + *num2 ;
    *sub = *num1 - *num2 ;
}