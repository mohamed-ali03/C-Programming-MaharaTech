#include <stdio.h> 

int scalarMult(int *arr_1 , int *arr_2,int n);

int main (){
    int n ; 
    int count ;
    int ScalMult;
    printf("Enter the size of the array : ");
    scanf("%i",&n);

    int array_1 [n];
    int array_2 [n];

    printf("Enter the values of array one : \n");
    for (count = 0 ; count < n ; count++ ){
        printf("Enter element number %i : ",count+1);
        scanf("%i",&array_1[count]);
    }

    printf("Enter the values of array Two : \n");
    for (count = 0 ; count < n ; count++ ){
        printf("Enter element number %i : ",count+1);
        scanf("%i",&array_2[count]);
    }

    ScalMult = scalarMult(array_1,array_2 ,n);

    printf("Result of the Scalar Multiplication is %i\n",ScalMult);

    return 0 ;
}

int scalarMult(int *arr_1 , int *arr_2 ,int size ){
    int ScalMult =0 ;
    int count ;

    for (count = 0 ; count < size ; count++){
        ScalMult += *arr_1++ * *arr_2++;
    }


    return ScalMult;
}