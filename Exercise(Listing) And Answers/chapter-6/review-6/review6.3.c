// review6.3.c
#include<stdio.h>
int main(void)
{
    double x;
    printf("Enter:\n");
    scanf("%lf", &x);
    for(int i = x; i > 5; i++);
     printf("%lf", x);

     return 0;
}