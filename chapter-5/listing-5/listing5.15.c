/*pound.c -- defines a function with an argument*/
#include<stdio.h>
void pound(int n);  //ANSI prototype

int main(void)
{
    int times = 5;
    char ch = '!';  // ASCII code is 33
    float f = 7.9;

    pound(times); // int argument
    pound(ch);    // char automatically -> int
    pound((int) f); //cast forces f -> int

    return 0;
}
void pound(int n)
{
    while (n-- > 0)
       printf("#");
    printf("\n");
    
}