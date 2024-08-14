#include <stdio.h>

int sumOfArray(int *arr,int size);
int main (){
    int n ;
    int count ;
    int sum ; 
    printf("Enter the size of the array : ");
    scanf("%i",&n);

    int array [n];

    for (count = 0 ; count  <n ; count++){
        printf("Enter element number %i : ",count+1);
        scanf("%i",&array[count]);
    }

    sum = sumOfArray(array , n );

    printf("Summation of the array is %i \n",sum);
    return 0 ;
}



int sumOfArray(int *arr ,int size){
    int result =0 ;
    int count ;

    for (count = 0 ; count  <size ; count++){
        result += *arr++;
    }

    return result ;
}