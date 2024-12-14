/*Write a program that asks you to enter an ASCII code value, such as 66, and then
prints the character having that ASCII code */

#include<stdio.h>
int main(void){

    int a ;
    char ascii;

    printf("Enter the ASICC number: ");
    scanf("%d\n", &a);
    ascii = a;
    printf("The character for ASCII %d is %c", ascii,ascii);

}