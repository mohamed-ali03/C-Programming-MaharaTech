#include <stdio.h>

#define SET_BIT(DIS,POS)    (DIS |= (1<<POS))
#define CLEAR_BIT(DIS,POS)  (DIS &= ~(1<<POS))
#define TOGGLE_BIT(DIS,POS) (DIS ^= (1<<POS))
#define READ_BIT(DIS,POS)   ((DIS>>POS) & 1)

int main(viod){
    int x = 5 ;

    //clear bit 
    printf("Before Clearing x = %i\n",x);
    CLEAR_BIT(x,2);
    printf("After Clearing x = %i\n",x);

    printf("\n--------------------------------------------------------\n\n");
    //set bit 
    printf("Before Setting x = %i\n",x);
    SET_BIT(x,3);
    printf("After Setting x = %i\n",x);


    printf("\n--------------------------------------------------------\n\n");
    //toggle bit 
    printf("Before Toggling x = %i\n",x);
    SET_BIT(x,5);
    printf("After Toggling x = %i\n",x);

    printf("\n--------------------------------------------------------\n\n");
    //read bit 1 and 3 and 5 
    printf("Bit 1 = %i\n",READ_BIT(x,1));
    printf("Bit 3 = %i\n",READ_BIT(x,3));
    printf("Bit 5 = %i\n",READ_BIT(x,5));
    return 0; 
}