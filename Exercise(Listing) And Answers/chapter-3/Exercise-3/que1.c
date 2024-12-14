/*Find out what your system does with integer overflow, floating-point overflow,
and floating-point underflow by using the experimental approach; that is, write
programs having these problems.*/

#include<stdio.h>
int main(void){
    int a = 20.4e+10;
    float b = 2.9e05L;
    int c;
    float d;

    c = a + 20e-2;
    d = b - 2.0e3L;
    printf("overflow c = %d\n", c);
    printf("underflow is d = %f", d);

    return 0;
}