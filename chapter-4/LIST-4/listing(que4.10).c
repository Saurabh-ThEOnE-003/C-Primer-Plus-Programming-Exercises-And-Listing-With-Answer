/*TO print follow statement*/
/*The NAME family just may be $XXX.XX dollars richer!*/
#include<stdio.h>
int main(void)
{
    char name[40];
    float cash;

    printf("Enter the family name: \n");
    scanf("%s", name);
    printf("Enter the cash amount:$ \n");
    scanf("%f", &cash);
    printf("The %s family just may be $%.2f richer!\n",name,cash);

    return 0;
}