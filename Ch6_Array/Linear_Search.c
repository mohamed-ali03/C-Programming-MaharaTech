#include <stdio.h>

int main(void){
    int n=0 ; 
    int count ;
    int num ;
    int flag =0 ;
    printf("Enter count of numbers : ");
    scanf("%i",&n);
    int array[n];

    for(count = 0 ; count <n ;count++){
        printf("Number %i : ",count+1);
        scanf("%i",&array[count]);
    }

    printf("Enter number you need to find : ");
    scanf("%i",&num);

    for(count = 0 ; count <n ;count++)  {
        if (array[count] == num){
            flag =1 ;
            break;
        }
    }


    if(flag){
        printf("%i is exit and its index is %i\n",num,count+1);
    }
    else{
        printf("%i is not exit !!\n",num);
    }
    return 0 ;
}