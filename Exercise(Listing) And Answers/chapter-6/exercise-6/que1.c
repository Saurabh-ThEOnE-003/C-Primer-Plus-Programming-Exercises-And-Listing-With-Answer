/*Write a program that creates an array with 26 elements and stores the 26
lowercase letters in it. Also have it show the array contents.
*/
#include<stdio.h>
int main(void)
{
    const int SIZE = 26;
    char array[SIZE];
    int index = 0;

    // printf("Enter the letter's(lower cases): \n");
    // for(index = 0; index <= SIZE; index++)
    // scanf("%c", &array[index]);
    // for(index = 0; index <= SIZE; index++)
    // printf("%2c", array[index]);

    for(index = 0; index <= SIZE; index++)
        array[index] = 'a' + index;
    
    printf("The array contents:\n");
    for(index = 0; index < SIZE; index++)
         printf("%2c", array[index]);

    return 0;

}