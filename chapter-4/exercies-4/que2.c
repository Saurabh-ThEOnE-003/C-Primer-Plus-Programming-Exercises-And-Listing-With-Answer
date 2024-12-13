/*Write a program that requests your first name and does the following with it:
a. Prints it enclosed in double quotation marks
b. Prints it in a field 20 characters wide, with the whole field in quotes
c. Prints it at the left end of a field 20 characters wide, with the whole field
enclosed in quotes
d. Prints it in a field three characters wider than the name*/
#include<stdio.h>
int main(void)
{
    char name[40];
    printf("Enter your full name:\n");
    scanf("%s", name);
    
    printf("\'%s\'\n", name);  //a
    printf("\'%20s\'\n", name);    //b
    printf("\'%-20s\'\n",name); //c
    printf("%.3s\n",name);

    return 0;
}