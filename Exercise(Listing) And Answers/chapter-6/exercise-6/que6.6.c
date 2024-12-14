/*Write a program that reads a single word into a character array and then prints
the word backward. Hint: Use strlen() (Chapter 4) to compute the index of the
last character in the array*/
#include<stdio.h>
#include<string.h>
int main(void)
{
    char name[20];
    int size;
    int letters;

    printf("Please enter a Single word: \n");
    scanf("%s", name);

    letters = strlen(name);
    
    for(int i = letters; i > 0; i--)
        printf("%c", name[i - 1]);
    
    return 0;
}