#include <stdio.h>

int main (void){
    int n=0 ; 
    int count ;
    int num ;
    int begin;
    int mid ;
    int end;
    int index  ;


    printf("Enter count of numbers : ");
    scanf("%i",&n);
    int array[n];

    for(count = 0 ; count <n ;count++){
        printf("Number %i : ",count+1);
        scanf("%i",&array[count]);
    }

    printf("Enter number you need to find : ");
    scanf("%i",&num);


    begin = 0 ; end = n ;
    for (count = begin ; count < end ; count++){
        if(num == array[begin + (end-begin)/2]){
            index = count ;
            break;
        }
        else if(num == array[end-1]){
            index = end ;
            break;
        }
        else if (num < array[(end-begin)/2]){
            end = end/2 ;
            count =begin;
        }
        else{
            begin = end/2;
            count = begin;
        }
    }

    printf("%i\n",index);


    return 0 ;

}