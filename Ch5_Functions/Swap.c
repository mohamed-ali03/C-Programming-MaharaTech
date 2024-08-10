#include <stdio.h>

void Swap(void);
int x ;
int y ;
int main(void){

    printf("Enter the first number : ");
    scanf("%i",&x);
    printf("Enter the second number : ");
    scanf("%i",&y);

    Swap();
    
    printf("First number  = %i\nSecond number = %i\n",x,y);
}

void Swap(void){
    int temp ;
    temp =x ;
    x = y ;
    y = temp ;
}