/*review6.6.c*/
#include<stdio.h>
#define ROWS 8
int main(void)
{
    int rows;
    
    for(rows = 0; rows <= 4; rows++)
    {
        for(int k = 0; k < ROWS; k++)
            printf("$ ");
       printf("\n");
    }
    
    
    return 0;
}