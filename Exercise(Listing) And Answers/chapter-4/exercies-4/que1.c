/*Write a program that asks for your first name, your last name, and then prints
the names in the format last, first.*/
#include<stdio.h>
int main(void)
{
    char name[40];
    char last[40];

    printf("Enter your full name:\n");
    scanf("%s %s",name, last);
    printf("%s %s", last, name);

    return 0;
}