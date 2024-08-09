#include <stdio.h>

int main (void){
    int i =1;
    int x ;
    printf("Enter an integer : ");
    scanf("%i",&x);
    if(x>0){
        do{
            printf("%ix%i = %i\n",x,i,x*i);
            i++;
        }while(i <=12);
    }
    else{
        printf("Invaild Number!!\n");
    }
    return 0 ;
}