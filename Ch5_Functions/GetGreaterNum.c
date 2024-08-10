#include <stdio.h>

void GetGreaterNum(int num1 ,int num2);

int main (void){
    int num1 ;
    int num2 ;

    printf("Enter the first number : ");
    scanf("%i",&num1);
    printf("Enter the second number : ");
    scanf("%i",&num2);

    GetGreaterNum(num1,num2);
    return 0 ;
}


void GetGreaterNum(int num1 ,int num2){
    int res ;
    if (num1 != num2){
        res = num1 > num2 ? num1 :num2 ;
        printf("The maximum value is %i\n",res);
    }
    else{
        printf("Both numbers are equal\n");
    }

}