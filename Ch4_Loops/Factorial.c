#include <stdio.h>

int main(void){
    int x ;
    int count;
    int fac = 1 ;
    printf("Enter an integer : ");
    scanf("%i",&x);

    for (count = x ; count > 0 ; count --){
        fac *= count ;
    }

    printf("Factorial : %i\n",fac);
    return 0;
}