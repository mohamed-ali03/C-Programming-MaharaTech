#include <stdio.h>

int GetFactorialUsingRecursion(int num );


int main(){
    int number ;
    int fac ;
    printf("Enter the  number : ");
    scanf("%i",&number);

    fac = GetFactorialUsingRecursion(number);
    
    printf("Factorial of %i is %i\n",number,fac);
    return 0 ;
}

int GetFactorialUsingRecursion(int num){
    int fac ;
    if(num == 0){
        fac = 0 ;
    }
    else if(num ==1 ){
        fac = 1 ;
    }
    else {
        fac = num*GetFactorialUsingRecursion(num-1);
    }
    return fac ;
}
