/*Write a program that reads eight integers into an array and then prints them in
reverse order.*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    const int SIZE = 8;
    int array[SIZE];
    int index;

    printf("Enter %d Integers: ",SIZE);
    for(index = 0; index < SIZE; index++)
         scanf("%d", &array[index]); // read the integer

    printf("The array contains:\n");
    for(index = 0; index < SIZE; index++)
        printf("%3d", array[index]); //verify input
    printf("\n");

    printf("Array in Reverse order: \n");
    for(index = SIZE; index >= 0; index--)
          printf("%3d", array[index - 1]);
    printf("\n");
   
    return 0;
}