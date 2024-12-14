/*Use nested loops to produce the following pattern:
$
$$
$$$
$$$$
$$$$$*/
#include<stdio.h>
int main(void)
{
    int rows;
    int colums;
    //First loop for rows
    for(rows = 0; rows <= 5; rows++)
    {
        for(colums = 0; colums <= rows; colums++)
            printf("$");
        printf("\n");
    }
}