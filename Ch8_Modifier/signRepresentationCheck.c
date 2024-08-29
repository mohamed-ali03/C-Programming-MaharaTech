#include <stdio.h>
void GetBinaryUnsigned(unsigned int num , int *bin);

int main (void){
    
    int x = -1 ;
    int bin[32] = {0};
    int i ;
    // unsigned decimal representation
    printf("%u\n",x);
    // signed decimal representation
    printf("%i\n",x);
    GetBinaryUnsigned(x,bin);
    // unsigned binary representation
    printf("0b");
    for (i = 31 ; i >= 0 ; i--)
        printf("%i",bin[i]);
    return 0 ;
}


void GetBinaryUnsigned(unsigned int num , int *bin){
    int count = 0 ;
    while (num > 0 ){
        bin[count] = num % 2 ;
        num /=2 ;
        count++;
    }
}
