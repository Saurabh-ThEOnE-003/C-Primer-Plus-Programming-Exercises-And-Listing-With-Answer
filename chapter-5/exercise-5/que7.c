/*Write a program that requests a type float number and prints the value of the
number cubed. Use a function of your own design to cube the value and print it.
The main() program should pass the entered value to this function.
*/
#include<stdio.h>
void cube(void);
int main(void)
{
    cube();
    return 0;

}
void cube(void)
{
    float num;
    printf("Enter a fractional number: \n");
    scanf("%f", &num);
    num = num * num * num;
    printf("%d", (int)num);
}