#include <stdio.h>

// macro declaration
#define PI      3.14159265359

// Functions like Macros  
#define Area_Circle(r)          (PI*r*r)
#define Area_RECTANGLE(L,W)     (L*W) 
#define Area_Triangle(B,H)      (0.5*B*H)

int main(void){
    int sel ;
    printf("Please Select the shape: 1.Circle    2.Rectangle    3.Triagnle\n");
    scanf("%i",&sel);

    switch(sel){
        case 1:
            int r ;
            printf("please enter the reduis : ");
            scanf("%i",&r);
            printf("Area of Circle is %0.2f\n",Area_Circle(r));
            break;
        case 2 :
            int l , w ;
            printf("please enter the length and width : ");
            scanf("%i%i",&l,&w);
            printf("Area of Rectangle is %i\n",Area_RECTANGLE(l,w));
            break;
        case 3 :
            int B , H ;
            printf("please enter the length of the Base and Hight : ");
            scanf("%i%i",&B,&H);
            printf("Area of Triangle is %0.2f\n",Area_Triangle(B,H));
            break;
        default :
            printf("Undefind shape !!\n");
    }

    return 0 ;
}