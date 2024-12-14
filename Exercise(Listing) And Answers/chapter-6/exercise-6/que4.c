/*Have a program request the user to enter an uppercase letter. Use nested loops
to produce a pyramid pattern like this:
 A
 ABA
 ABCBA
ABCDCDA
ABCDEDCBA
The pattern should extend to the character entered. For example, the preceding
pattern would result from an input value of E. Hint: Use an outer loop to handle
the rows. Use three inner loops in a row, one to handle the spaces, one for
printing letters in ascending order, and one for printing letters in descending
order. If your system doesn't use ASCII or a similar system that represents letters
in strict number order, see the suggestion in programming exercise 3.*/
#include<stdio.h>
void print_spaces(unsigned int n);
int main(void)
{
    char Uppercase_letter;
    char n1, n2;

    do // get uppercase letter from user
    {
        printf("Enter an uppercase letter: ");
        scanf("%c", &Uppercase_letter);
    }while( Uppercase_letter < 'A' || 'Z' < Uppercase_letter);

    //loop for pattern

    for(n1 = 'A'; n1 <= Uppercase_letter; n1++)
    {
        //print opening spaces
        print_spaces(Uppercase_letter - n1);

        //print letters
        //ascending
        for(n2 = 'A'; n2 < n1; n2++)
        {
            printf("%c", n2);
        }
        //descending
        for(; 'A' <= n2; n2--)
        {
            printf("%c", n2);
        }

        //print closing spaces
        print_spaces(Uppercase_letter - n1);
        printf("\n");
        
    }

    return 0;
}

void print_spaces(unsigned int n)
{
    for (int i = 0; i < n ; i++)
    {
        printf(" ");
    }
}