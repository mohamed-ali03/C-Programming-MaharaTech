#include <stdio.h>


typedef union{
    struct {
        a0 :1;
        a1 :1;
        a2 :1;
        a3 :1;
        a4 :1;
        a5 :1;
        a6 :1;
        a7 :1;
    };
    char a ;
}a_t;

typedef enum {
    zero = 0 ,
    first ,
    second,
    third,
    fourth ,
    fifth ,
}count_t;

