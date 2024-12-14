/* Use nested loops to produce the following pattern:
F
FE
FED
FEDC
FEDCB
FEDCBA
Note: If your system doesn't use ASCII or some other code that encodes letters in
numeric order, you can use the following to initialize a character array to the
letters of the alphabet:
char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
Then you can use the arr*/
#include<stdio.h>
int main(void)
{
    char lets[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int count;
    char ch;
    
    for(count = 0; count <= 5; count++)
    {
        for(ch = 'F'; ch >= 'F' - count; ch--)
            printf("%c",ch);
        printf("\n");
    }
}
