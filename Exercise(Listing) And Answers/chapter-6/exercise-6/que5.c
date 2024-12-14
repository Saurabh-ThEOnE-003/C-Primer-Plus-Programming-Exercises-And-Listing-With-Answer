/*Write a program that prints a table with each line giving an integer, its square,
and its cube. Ask the user to input the lower and upper limits for the table. Use a
for loop.
*/
#include<stdio.h>

int main(void){

    int upper, lower;
    int i;

    printf("Please enter  Upper limit value: ");
    scanf("%d", &upper);
    printf("Please enter Lower limit value:");
    scanf("%d", &lower);

    printf("%5s %10s %13s\n", "Integer", "Square", "Cube");
    for(i = upper; i <= lower; i++)
          printf("%5d %10d %15d\n",i, i * i, i * i * i);
   

    return 0;
}
