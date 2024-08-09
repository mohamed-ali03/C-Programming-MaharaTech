#include <stdio.h>

int main(void){
    int Num1 ;
    int Num2 ;
    int sum ;
    printf("Enter two numbers to get the sum .if you finish enter zero in numbers \n");
    while(1){
        printf("Enter first number : ");
        scanf("%i",&Num1);
        printf("Enter second number : ");
        scanf("%i",&Num2);
        if (Num1 == 0 && Num2 == 0)break ;
        sum = Num1 + Num2;
        printf("The result is : %i\n",sum);
    }
    return 0 ;
}